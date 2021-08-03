#pragma once

#include "repr.h"

bool checkStmt(
  const Stmt & s,
  std::vector<Struct> structs,
  std::vector<Function> funcs,
  std::vector<Variable> vars)
{
  return true;
}

bool checkFunction(
  const Function & f,
  std::vector<Struct> structs,
  std::vector<Function> funcs,
  std::vector<Variable> vars)
{
  vars.insert(vars.end(), f.parameters.begin(), f.parameters.end());
  vars.insert(vars.end(), f.body.variables.begin(), f.body.variables.end());
  for (auto s : f.body.statements)
  {
    if (!checkStmt(s, structs, funcs, vars))
      return false;
  }
  return true;
}

bool checkProgram(const Program & p)
{
  for (auto f : p.functions)
  {
    if (!checkFunction(f, p.structs, p.functions, p.variables))
      return false;
  }
  for (auto s : p.structs)
  {
    std::vector<Variable> vars = p.variables;
    for (auto v : s.members)
      vars.push_back(v);
    for (auto f : s.methods)
    {
      if (!checkFunction(f, p.structs, p.functions, vars))
        return false;
    }
  }
  return true;
}