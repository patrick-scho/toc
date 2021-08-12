#pragma once

#include "repr.h"
#include "typeInfo.h"
#include "visit.h"

void addGenericInstantiation(
  std::vector<std::vector<Type>> & insts,
  const std::vector<Type> & newInst)
{
  if (insts.empty())
  {
    insts.push_back(newInst);
    return;
  }
  for (auto inst : insts)
  {
    for (int i = 0; i < inst.size(); i++)
    {
      if (inst[i] != newInst[i])
      {
        insts.push_back(newInst);
        return;
      }
    }
  }
}

Program instantiateGenerics(const Program & p)
{
  Program result = p;

  // Find generic instantiations

  Visitor findGenericInstantiations;
  findGenericInstantiations.onExpr =
  [&](const Expr & e, const std::shared_ptr<Context> ctx)
  {
    if (e.type == ExprType::Func && !e._func.genericInstantiation.empty())
    {
      auto f = findFunctionPtr(e._func.functionName, e._func.namespacePrefixes, ctx);
      if (f.has_value())
      {
        if (std::get<0>(*f)->genericTypeNames.empty())
          throw "Trying to instantiate non-generic function";
        if (e._func.genericInstantiation.size() != std::get<0>(*f)->genericTypeNames.size())
          throw "Trying to instantiate function with wrong number of types";
        addGenericInstantiation(std::get<0>(*f)->genericInstantiations, e._func.genericInstantiation);
      }
    }
    // TODO: generic methods
  };
  findGenericInstantiations.onType =
  [&](const Type & t, const std::shared_ptr<Context> ctx)
  {
    if (!t.genericInstantiation.empty())
    {
      auto s = findStructPtr(t.name, t.namespacePrefixes, ctx);
      if (s.has_value())
      {
        if (std::get<0>(*s)->genericTypeNames.empty())
          throw "Trying to instantiate non-generic struct";
        if (t.genericInstantiation.size() != std::get<0>(*s)->genericTypeNames.size())
          throw "Trying to instantiate struct with wrong number of types";
        addGenericInstantiation(std::get<0>(*s)->genericInstantiations, t.genericInstantiation);
      }
    }
  };
  Visit v(findGenericInstantiations);
  v.visit(result);

  return result;
}

std::string genericAppendix(const std::vector<Type> & ts)
{
  std::stringstream sstr;
  for (auto t : ts)
  {
    sstr << "_";
    sstr << t.name;
    for (auto m : t.modifiers)
    {
      if (m.type == TypeModifierType::Array)
      {
        sstr << "_arr";
        if (m._staticArray)
          sstr << m._arraySize;
      }
      else if (m.type == TypeModifierType::Pointer)
      {
        sstr << "_ptr";
      }
    }
    if (!t.genericInstantiation.empty())
    {
      sstr << genericAppendix(t.genericInstantiation);
    }
  }
  return sstr.str();
}