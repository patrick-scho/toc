#pragma once

#include <vector>
#include <string>
#include <memory>

#include "TocParser.h"

using namespace std;

struct Type;
struct Variable;
struct Body;
struct Function;
struct Struct;
struct Program;
struct CallExpr;
struct LiteralExpr;
struct VariableExpr;
struct BracketsExpr;
struct OperatorExpr;
struct DotExpr;
struct Expr;
struct IfStmt;
struct WhileStmt;
struct ReturnStmt;
struct AssignStmt;
struct Stmt;


struct Type {
  std::string name;
};

struct Variable {
  std::string name;
  Type type;
};

struct Body {
  std::vector<Variable> variables;
  std::vector<Stmt> statements;
};

struct Function {
  std::string name;
  std::vector<Variable> parameters;
  Body body;
};

struct Struct {
  std::string name;
  std::vector<Variable> members;
  std::vector<Function> methods;
};

struct Program {
  std::vector<Variable> variables;
  std::vector<Struct> structs;
  std::vector<Function> functions;
};

enum class ExprType {
  Call, Literal, Variable, Brackets, Operator, Dot
};

struct CallExpr {
  Function function;
  std::vector<Expr> arguments;
};

struct LiteralExpr {
  int i;
};

struct VariableExpr {
  std::string name;
};

struct BracketsExpr {
  BracketsExpr() {}
  BracketsExpr(const BracketsExpr &) {}
  BracketsExpr & operator=(const BracketsExpr &) {return *this;};
  std::unique_ptr<Expr> lexpr;
  std::unique_ptr<Expr> rexpr;
};

enum class OperatorType {
  Plus, Minus, Multiply, Divide,
  Equals, NotEquals,
  LessThan, GreaterThan
};

struct OperatorExpr {
  OperatorExpr() {}
  OperatorExpr(const OperatorExpr &) {}
  OperatorExpr & operator=(const OperatorExpr &) {return *this;};
  std::unique_ptr<Expr> lexpr;
  std::unique_ptr<Expr> rexpr;
  OperatorType type;
};

struct DotExpr {
  DotExpr() {}
  DotExpr(const DotExpr &) {}
  DotExpr & operator=(const DotExpr &) {return *this;};
  std::unique_ptr<Expr> lexpr;
  std::string name;
};

struct Expr {
  ExprType type;

  CallExpr     _call;
  LiteralExpr  _literal;
  VariableExpr _variable;
  BracketsExpr _brackets;
  OperatorExpr _operator;
  DotExpr      _dot;
};

enum class StmtType {
  If, While, Return, Assign, Expr
};

struct IfStmt {
  Expr condition;
  Body body;
};

struct WhileStmt {
  Expr condition;
  Body body;
};

struct ReturnStmt {
  Expr expr;
};

struct AssignStmt {
  Expr lexpr;
  Expr rexpr;
};

struct Stmt {
  StmtType type;
  
  IfStmt     _if;
  WhileStmt  _while;
  ReturnStmt _return;
  AssignStmt _assign;
  Expr       _expr;
};


