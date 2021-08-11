#pragma once

#include "repr.h"
#include "typeInfo.h"

#include <functional>
#include <optional>

template<typename T>
using opt = std::optional<T>;

template<typename T>
opt<T> find(const std::vector<T> & ts, std::function<bool(T)> f)
{
  for (auto t : ts)
    if (f(t))
      return t;
  return nullopt;
}

template<typename T>
opt<T *> findPtr(const std::vector<T> & ts, std::function<bool(T)> f)
{
  for (int i = 0; i < ts.size(); i++)
    if (f(ts[i]))
      return &((T *)ts.data())[i];
  return nullopt;
}

bool checkNamespace(std::shared_ptr<Context> ctx, const std::vector<std::string> & namespacePrefix)
{
  
    bool prefixMatches = true;

    auto nIt = ctx;
    for (int i = namespacePrefix.size() - 1; i >= 0; i--)
    {
      const std::string & prefix = namespacePrefix[i];
      if (nIt == nullptr || ! nIt->name.has_value() || nIt->name.value() != prefix)
      {
        prefixMatches = false;
        break;
      }
      nIt = nIt->parent;
    }

    return prefixMatches;
}



opt<Function> findFunction(
  const std::string & name,
  const std::vector<std::string> & namespacePrefix,
  std::shared_ptr<Context> ctx)
{
  for (auto it = ctx; it != nullptr; it = it->parent)
  {
    auto f = find<Function>(it->functions, [&](Function f) { return f.name == name; });
    if (f.has_value() && checkNamespace(it, namespacePrefix))
      return f;
  }
  return nullopt;
}

opt<Function *> findFunctionPtr(
  const std::string & name,
  const std::vector<std::string> & namespacePrefix,
  std::shared_ptr<Context> ctx)
{
  for (auto it = ctx; it != nullptr; it = it->parent)
  {
    auto f = findPtr<Function>(it->functions, [&](Function f) { return f.name == name; });
    if (f.has_value() && checkNamespace(it, namespacePrefix))
      return f;
  }
  return nullopt;
}



opt<Struct> findStruct(
  const std::string & name,
  const std::vector<std::string> & namespacePrefix,
  std::shared_ptr<Context> ctx)
{
  for (auto it = ctx; it != nullptr; it = it->parent)
  {
    auto s = find<Struct>(it->structs, [&](Struct s) { return s.name == name; });
    if (s.has_value() && checkNamespace(it, namespacePrefix))
      return s;
  }
  return nullopt;
}

opt<Struct *> findStructPtr(
  const std::string & name,
  const std::vector<std::string> & namespacePrefix,
  std::shared_ptr<Context> ctx)
{
  for (auto it = ctx; it != nullptr; it = it->parent)
  {
    auto s = findPtr<Struct>(it->structs, [&](Struct s) { return s.name == name; });
    if (s.has_value() && checkNamespace(it, namespacePrefix))
      return s;
  }
  return nullopt;
}



opt<Variable> findVariable(
  const std::string & name,
  const std::vector<std::string> & namespacePrefix,
  std::shared_ptr<Context> ctx)
{
  for (auto it = ctx; it != nullptr; it = it->parent)
  {
    auto v = find<Variable>(it->variables, [&](Variable v) { return v.name == name; });
    if (v.has_value() && checkNamespace(it, namespacePrefix))
      return v;
  }
  return nullopt;
}



opt<StructMember<Function>> findStructMethod(
  const std::string & name,
  const Struct & s)
{
  return find<StructMember<Function>>(s.methods, [&](Function f) { return f.name == name; });
}
opt<StructMember<Function> *> findStructMethodPtr(
  const std::string & name,
  const Struct & s)
{
  return findPtr<StructMember<Function>>(s.methods, [&](Function f) { return f.name == name; });
}

opt<StructMember<Variable>> findStructMember(
  const std::string & name,
  const Struct & s)
{
  return find<StructMember<Variable>>(s.members, [&](Variable v) { return v.name == name; });
}

opt<StructMember<Variable> *> findStructMemberPtr(
  const std::string & name,
  const Struct & s)
{
  return findPtr<StructMember<Variable>>(s.members, [&](Variable v) { return v.name == name; });
}