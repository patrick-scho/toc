#pragma once

#include <vector>
#include <string>
#include <memory>

#include "TocParser.h"

using namespace std;

// This contains a 1 to 1 representation of the defined language

struct Type;
struct Variable;
struct Body;
struct Function;
struct Struct;
struct Namespace;
struct Program;

struct FuncExpr;
struct MethodExpr;
struct LitExpr;
struct ParenExpr;
struct DotExpr;
struct PrefixOperatorExpr;
struct PostfixOperatorExpr;
struct BinaryOperatorExpr;
struct TernaryOperatorExpr;
struct BracketsExpr;
struct IdentifierExpr;
struct Expr;

struct IfStmt;
struct SwitchStmt;
struct ForStmt;
struct WhileStmt;
struct AssignStmt;
struct ReturnStmt;
struct Stmt;

// Context is a collection of everything that can be defined in a namespace
// that is reused for bodies so that the hierarchy can be walked uniformly
// both up and down using the parent variable
struct Context
{
  std::optional<std::string> name;
  std::shared_ptr<Context> parent;
  std::vector<Variable> variables;
  std::vector<Function> functions;
  std::vector<Struct> structs;
  std::vector<Namespace> namespaces;
};

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
  std::vector<std::string> namespacePrefixes;
  std::string name;
  std::vector<TypeModifier> modifiers;
  std::vector<Type> genericInstantiation;
  
  bool operator!=(const Type & that)
  {
    if (this->name != that.name)
      return true;

    for (int i = 0; i < this->modifiers.size(); i++)
      if (this->modifiers[i].type != that.modifiers[i].type)
        return true;

    for (int i = 0; i < this->namespacePrefixes.size(); i++)
      if (this->namespacePrefixes[i] != that.namespacePrefixes[i])
        return true;
    return false;
  }
};

struct Variable
{
  std::string name;
  Type type;
};

struct Body
{
  std::shared_ptr<Context> ctx;
  std::vector<Stmt> statements;
};

struct Function
{
  std::string name;
  Type returnType;
  std::vector<Variable> parameters;
  bool defined;

  std::vector<std::string> genericTypeNames;
  std::vector<std::vector<Type>> genericInstantiations;

  Body body;
};

template<typename T>
struct StructMember
{
  T t;
  bool isPublic;
  operator T() { return t; }
};

struct Struct
{
  std::string name;
  std::vector<std::string> genericTypeNames;
  std::vector<std::vector<Type>> genericInstantiations;
  std::vector<StructMember<Variable>> members;
  std::vector<StructMember<Function>> methods;
};

struct Namespace
{
  std::string name;
  std::shared_ptr<Context> ctx;
};

struct Program
{
  std::shared_ptr<Context> ctx;
};

enum class ExprType
{
  Func, Method, Lit, Paren, Dot, PrefixOp, PostfixOp, BinaryOp, TernaryOp, Bracket, Identifier
};

struct FuncExpr
{
  std::vector<std::string> namespacePrefixes;
  std::string functionName;
  std::vector<Expr> arguments;
  std::vector<Type> genericInstantiation;
};

struct MethodExpr
{
  std::shared_ptr<Expr> expr;
  std::string methodName;
  std::vector<Expr> arguments;
  std::vector<Type> genericInstantiation;
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

struct ParenExpr
{
  std::shared_ptr<Expr> expr;
};

struct DotExpr
{
  bool isPointer;
  std::shared_ptr<Expr> expr;
  std::string identifier;
};

// OperatorType enum with corresponding string array to lookup
// enum from string and the other way round
enum class PrefixOperatorType
{
  Plus, Minus, Increment, Decrement,
  LogicalNot, BitwiseNot, Dereference, AddressOf,
  COUNT
};
static std::string PrefixOperatorTypeStrings[] =
{
  "+", "-", "++", "--", "!", "~", "*", "&" };

struct PrefixOperatorExpr
{
  PrefixOperatorType type;
  std::shared_ptr<Expr> expr;
};

enum class PostfixOperatorType
{
  Increment, Decrement,
  COUNT
};
static std::string PostfixOperatorTypeStrings[] =
{
  "++", "--" };

struct PostfixOperatorExpr
{
  PostfixOperatorType type;
  std::shared_ptr<Expr> expr;
};

enum class BinaryOperatorType
{
  Plus, Minus, Multiply, Divide, Modulo, BitwiseAnd, BitwiseOr, BitwiseXor, LessThan, GreaterThan,
  LeftShift, RightShift, LogicalAnd, LogicalOr, Equals, NotEquals, LessThanEquals, GreaterThanEquals, BitwiseAndEquals, BitwiseOrEquals, BitwiseXorEquals,
  PlusEquals, MinusEquals, MultiplyEquals, DivideEquals, ModuloEquals,
  LeftShiftEquals, RightShiftEquals,
  COUNT
};
static std::string BinaryOperatorTypeStrings[] =
{
  "+", "-", "*", "/", "%", "&", "|", "^", "<", ">",
  "<<",">>","&&","||","==","!=","<=",">=","&=","|=","^=",
  "+=","-=","*=","/=","%=",
  "<<=",">>=" };

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

struct BracketsExpr
{
  std::shared_ptr<Expr> lexpr;
  std::shared_ptr<Expr> rexpr;
};

struct IdentifierExpr
{
  std::vector<std::string> namespacePrefixes;
  std::string identifier;
};

struct Expr
{
  ExprType type;

  FuncExpr            _func;
  MethodExpr          _method;
  LitExpr             _lit;
  ParenExpr           _paren;
  DotExpr             _dot;
  PrefixOperatorExpr  _prefixOp;
  PostfixOperatorExpr _postfixOp;
  BinaryOperatorExpr  _binaryOp;
  TernaryOperatorExpr _ternaryOp;
  BracketsExpr        _brackets;
  IdentifierExpr      _identifier;
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
  std::shared_ptr<Expr> ident;
  std::vector<SwitchCase> cases;
};

// TODO: int i = 0 (var decl)
struct ForStmt
{
  std::shared_ptr<AssignStmt> init;
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
  Expr lexpr, rexpr;
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


