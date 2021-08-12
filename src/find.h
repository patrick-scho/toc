#pragma once

#include "repr.h"
#include "typeInfo.h"

#include <functional>
#include <optional>

template<typename T>
using opt = std::optional<T>;
template<typename ... Ts>
using tup = std::tuple<Ts ...>;

// find an item in a vector by predicate
template<typename T>
opt<T> find(const std::vector<T> & ts, std::function<bool(T)> f)
{
  for (auto t : ts)
    if (f(t))
      return t;
  return nullopt;
}

// same as above but return pointer into raw array held by vector
template<typename T>
opt<T *> findPtr(const std::vector<T> & ts, std::function<bool(T)> f)
{
  for (int i = 0; i < ts.size(); i++)
    if (f(ts[i]))
      return &((T *)ts.data())[i];
  return nullopt;
}

opt<tup<
        std::shared_ptr<Context>,
        std::vector<std::string>>>
getContext(std::shared_ptr<Context> ctx, const std::vector<std::string> & namespacePrefix)
{
  // try finding a continuos series of namespaces in a given context
  auto result = ctx;

  for (auto name : namespacePrefix)
  {
    auto newResult = find<Namespace>(result->namespaces, [&](Namespace n) { return n.name == name; });
    if (newResult.has_value())
    {
      result = newResult->ctx;
    }
    else
    {
      return nullopt;
    }
  }

  // if the found context is the end of a series of namespaces, also return
  // a vector of namespace names
  std::vector<std::string> namespaces;
  for (auto it = result; it != nullptr; it = it->parent)
  {
    if (it->name.has_value())
    {
      namespaces.insert(namespaces.begin(), it->name.value());
    }
    else if (it->parent != nullptr)
    {
      namespaces.clear();
      break;
    }
  }

  return std::make_tuple(result, namespaces);
}

// all of the following functions work the same way,
// walking up the context hierarchy until the global context.
// return the first found instance that matches provided criteria
// theres also a variant to get a pointer instead for functions and
// structs used for generic instantiation

opt<tup<Function, std::vector<std::string>>> findFunction(
  const std::string & name,
  const std::vector<std::string> & namespacePrefix,
  std::shared_ptr<Context> ctx)
{
  for (auto it = ctx; it != nullptr; it = it->parent)
  {
    auto n = getContext(it, namespacePrefix);
    if (n.has_value())
    {
      auto x = find<Function>(std::get<0>(*n)->functions, [&](Function _) { return _.name == name; });
      if (x.has_value())
        return std::make_tuple(x.value(), std::get<1>(*n));
    }
  }
  return nullopt;
}

opt<tup<Function *, std::vector<std::string>>> findFunctionPtr(
  const std::string & name,
  const std::vector<std::string> & namespacePrefix,
  std::shared_ptr<Context> ctx)
{
  for (auto it = ctx; it != nullptr; it = it->parent)
  {
    auto n = getContext(it, namespacePrefix);
    if (n.has_value())
    {
      auto x = findPtr<Function>(std::get<0>(*n)->functions, [&](Function _) { return _.name == name; });
      if (x.has_value())
        return std::make_tuple(x.value(), std::get<1>(*n));
    }
  }
  return nullopt;
}



opt<tup<Struct, std::vector<std::string>>> findStruct(
  const std::string & name,
  const std::vector<std::string> & namespacePrefix,
  std::shared_ptr<Context> ctx)
{
  for (auto it = ctx; it != nullptr; it = it->parent)
  {
    auto n = getContext(it, namespacePrefix);
    if (n.has_value())
    {
      auto x = find<Struct>(std::get<0>(*n)->structs, [&](Struct _) { return _.name == name; });
      if (x.has_value())
        return std::make_tuple(x.value(), std::get<1>(*n));
    }
  }
  return nullopt;
}

opt<tup<Struct *, std::vector<std::string>>> findStructPtr(
  const std::string & name,
  const std::vector<std::string> & namespacePrefix,
  std::shared_ptr<Context> ctx)
{
  for (auto it = ctx; it != nullptr; it = it->parent)
  {
    auto n = getContext(it, namespacePrefix);
    if (n.has_value())
    {
      auto x = findPtr<Struct>(std::get<0>(*n)->structs, [&](Struct _) { return _.name == name; });
      if (x.has_value())
        return std::make_tuple(x.value(), std::get<1>(*n));
    }
  }
  return nullopt;
}



opt<tup<Variable, std::vector<std::string>>> findVariable(
  const std::string & name,
  const std::vector<std::string> & namespacePrefix,
  std::shared_ptr<Context> ctx)
{
  for (auto it = ctx; it != nullptr; it = it->parent)
  {
    auto n = getContext(it, namespacePrefix);
    if (n.has_value())
    {
      auto x = find<Variable>(std::get<0>(*n)->variables, [&](Variable _) { return _.name == name; });
      if (x.has_value())
        return std::make_tuple(x.value(), std::get<1>(*n));
    }
  }
  return nullopt;
}



// find struct members and pointer variants

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