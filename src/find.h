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

opt<Function> findFunction(
  const Program & p,
  const std::string & name,
  const std::vector<std::string> & namespacePrefixes)
{
  if (namespacePrefixes.empty())
  {
    return find<Function>(p.functions, [&](Function f) { return f.name == name; });
  }
  
  auto n = find<Namespace>(p.namespaces, [&](Namespace n) { return n.name == namespacePrefixes[0]; });

  if (!n.has_value())
    return nullopt;

  std::vector<Namespace> namespaces = { n.value() };

  for (int i = 1; i < namespacePrefixes.size(); i++)
  {
    n = find<Namespace>(n.value().namespaces, [&](Namespace n) { return n.name == namespacePrefixes[i]; });
    
    if (!n.has_value())
      return nullopt;

    namespaces.push_back(n.value());
  }

  for (int i = namespaces.size()-1; i >= 0; i--)
  {
    auto f = find<Function>(namespaces[i].functions, [&](Function f) { return f.name == name; });
    if (f.has_value())
      return f.value();
  }

  return find<Function>(p.functions, [&](Function f) { return f.name == name; });
}

opt<Struct> findStruct(
  const Program & p,
  const std::string & name,
  const std::vector<std::string> & namespacePrefixes)
{
  if (namespacePrefixes.empty())
  {
    return find<Struct>(p.structs, [&](Struct s) { return s.name == name; });
  }
  
  auto n = find<Namespace>(p.namespaces, [&](Namespace n) { return n.name == namespacePrefixes[0]; });
  
  if (!n.has_value())
    return nullopt;
    
  for (int i = 1; i < namespacePrefixes.size(); i++)
  {
    n = find<Namespace>(n.value().namespaces, [&](Namespace n) { return n.name == namespacePrefixes[i]; });

    if (!n.has_value())
      return nullopt;
  }
  return find<Struct>(n.value().structs, [&](Struct s) { return s.name == name; });
}

opt<Variable> findVariable(
  const Program & p,
  const std::string & name,
  std::shared_ptr<Context> ctx)
{
  auto it = ctx;
  while (it != nullptr)
  {
    auto v = find<Variable>(it->variables, [&](Variable v) { return v.name == name; });
    if (v.has_value())
      return v;
    it = it->parent;
  }
  return nullopt;
}

opt<Function> findStructMethod(
  const Program & p,
  const std::string & name,
  TypeInfo ti)
{
  if (!ti.isStruct)
    return nullopt;
  auto s = findStruct(p, ti.type.name, ti.type.namespacePrefixes);
  if (!s.has_value())
    return nullopt;
  return find<StructMember<Function>>(s.value().methods, [&](Function f) { return f.name == name; });
}

opt<Variable> findStructMember(
  const Program & p,
  TypeInfo ti,
  const std::string & name)
{
  auto s = findStruct(p, ti.type.name, ti.type.namespacePrefixes);
  if (!s.has_value())
    return nullopt;
  return find<StructMember<Variable>>(s.value().members, [&](Variable v) { return v.name == name; });
}