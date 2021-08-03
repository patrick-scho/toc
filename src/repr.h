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
struct FuncExpr;
struct LitExpr;
struct IdentifierExpr;
struct AccessExpr;
struct BracketsExpr;
struct UnaryOperatorExpr;
struct BinaryOperatorExpr;
struct TernaryOperatorExpr;
struct DotExpr;
struct ParenExpr;
struct Expr;
struct IfStmt;
struct SwitchStmt;
struct ForStmt;
struct WhileStmt;
struct AssignStmt;
struct ReturnStmt;
struct Stmt;

enum class TypeModifierType
{
  Pointer, Array
};

struct TypeModifier
{
  TypeModifierType type;

  bool _staticArray;
  int _arraySize;
};

struct Type
{
  std::string name;
  std::vector<TypeModifier> modifiers;
};

struct Variable
{
  std::string name;
  Type type;
};

struct Body
{
  std::vector<Variable> variables;
  std::vector<Stmt> statements;
};

struct Function
{
  Type returnType;
  std::string name;
  std::vector<Variable> parameters;
  Body body;
};

struct Struct
{
  std::string name;
  std::vector<Variable> members;
  std::vector<Function> methods;
};

struct Program
{
  std::vector<Variable> variables;
  std::vector<Struct> structs;
  std::vector<Function> functions;
};

enum class ExprType
{
  Func, Lit, Identifier, Brackets, UnaryOperator, BinaryOperator, TernaryOperator, Dot
};

struct FuncExpr
{
  std::string functionName;
  std::vector<Expr> arguments;
};

enum class LitType
{
  Int, Decimal, String, Bool
};

struct LitExpr
{
  LitType type;

  int _int;
  double _decimal;
  std::string _string;
  bool _bool;
};

// TODO: accessExpr
struct IdentifierExpr
{
  std::string name;
};

struct BracketsExpr
{
  std::shared_ptr<Expr> lexpr;
  std::shared_ptr<Expr> rexpr;
};

enum class UnaryOperatorType
{
  Plus, Minus, IncrementPre, DecrementPre, IncrementPost, DecrementPost,
  LogicalNot, BitwiseNot, Dereference, AddressOf,
  COUNT
};

enum class BinaryOperatorType
{
  Plus, Minus, Multiply, Divide, Modulo, BitwiseAnd, BitwiseOr, BitwiseXor, LessThan, GreaterThan,
  LeftShift, RightShift, LogicalAnd, LogicalOr, Equals, NotEquals, LessThanEquals, GreaterThanEquals, BitwiseAndEquals, BitwiseOrEquals, BitwiseXorEquals,
  PlusEquals, MinusEquals, MultiplyEquals, DivideEquals, ModuloEquals,
  LeftShiftEquals, RightShiftEquals,
  COUNT
};
static std::string UnaryOperatorTypeStrings[] =
{
  "+", "-", "++", "--", "++", "--", "!", "~", "*", "&" };

static std::string BinaryOperatorTypeStrings[] =
{
  "+", "-", "*", "/", "%", "&", "|", "^", "<", ">",
  "<<",">>","&&","||","==","!=","<=",">=","&=","|=","^=",
  "+=","-=","*=","/=","%=",
  "<<=",">>=" };

struct UnaryOperatorExpr
{
  UnaryOperatorType type;
  std::shared_ptr<Expr> expr;
};

struct BinaryOperatorExpr
{
  BinaryOperatorType type;
  std::shared_ptr<Expr> lexpr;
  std::shared_ptr<Expr> rexpr;
};

struct TernaryOperatorExpr
{
  std::shared_ptr<Expr> lexpr;
  std::shared_ptr<Expr> rexprTrue;
  std::shared_ptr<Expr> rexprFalse;
};

struct DotExpr
{
  std::shared_ptr<Expr> expr;
  IdentifierExpr ident;
};

// TODO: paren expr
struct Expr
{
  ExprType type;

  bool parenthesized;

  FuncExpr            _func;
  LitExpr             _lit;
  IdentifierExpr      _identifier;
  BracketsExpr        _brackets;
  UnaryOperatorExpr   _unaryOperator;
  BinaryOperatorExpr  _binaryOperator;
  TernaryOperatorExpr _ternaryOperator;
  DotExpr             _dot;
};

enum class StmtType
{
  If, Switch, For, While, Assign, Return, Expr
};

struct ElseStmt
{
  bool _if;
  std::shared_ptr<Expr> expr;
  Body body;
};
struct IfStmt
{
  Expr condition;
  Body body;
  std::vector<ElseStmt> elses;
};

struct SwitchCase
{
  std::shared_ptr<Expr> expr;
  Body body;
};

struct SwitchStmt
{
  IdentifierExpr ident;
  std::vector<SwitchCase> cases;
};

// TODO: int i = 0 (var decl)
struct ForStmt
{
  std::string varName;
  std::shared_ptr<Expr> initValue;
  std::shared_ptr<Expr> condition;
  std::shared_ptr<Expr> action;
  Body body;
};

struct WhileStmt
{
  Expr condition;
  Body body;
};

struct AssignStmt
{
  std::string name;
  Expr expr;
};

struct ReturnStmt
{
  Expr expr;
};

struct Stmt
{
  StmtType type;
  
  IfStmt      _if;
  SwitchStmt  _switch;
  ForStmt     _for;
  WhileStmt   _while;
  AssignStmt  _assign;
  ReturnStmt  _return;
  Expr        _expr;
};


