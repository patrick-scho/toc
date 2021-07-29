#pragma once

#include <iostream>

#include "repr.h"

template<typename T>
std::ostream & operator<< (std::ostream & out, const std::vector<T> & v) {
  bool comma = false;
  for (auto t : v) {
    if (comma) out << ", ";
    else comma = true;
    out << t;
  }
  return out;
}

std::ostream & operator<< (std::ostream & out, const Type & t);
std::ostream & operator<< (std::ostream & out, const Variable & v);
std::ostream & operator<< (std::ostream & out, const Body & b);
std::ostream & operator<< (std::ostream & out, const OperatorExpr & o);
std::ostream & operator<< (std::ostream & out, const Expr & e);
std::ostream & operator<< (std::ostream & out, const Stmt & s);

void tocFunction (std::ostream & out, const Function & f, bool stub);
void tocStruct   (std::ostream & out, const Struct & s, bool stub);
void tocProgram  (std::ostream & out, const Program & p);

static const int TAB_WIDTH = 2;
static int indentation = 0;
static void indent(std::ostream & out, int change = 0) {
  indentation += change;
  out << std::string(indentation, ' ');
}

std::ostream & operator<< (std::ostream & out, const Type & t) {
  out << t.name;

  return out;
}
std::ostream & operator<< (std::ostream & out, const Variable & v) {
  out << v.type << " " << v.name;

  return out;
}
std::ostream & operator<< (std::ostream & out, const Body & b) {
  indent(out);
  out << "{\n";
  indentation += 2;

  for (auto v : b.variables) {
    indent(out);
    out << v << ";\n";
  }

  out << "\n";
  
  for (auto s : b.statements) {
    indent(out);
    out << s << ";\n";
  }

  indent(out, -2);
  out << "}\n";

  return out;
}
std::ostream & operator<< (std::ostream & out, const OperatorExpr & o) {
  out << *o.lexpr << " ";

  switch (o.type) {
  case OperatorType::Plus:        out << "+"; break;
  case OperatorType::Minus:       out << "-"; break;
  case OperatorType::Multiply:    out << "*"; break;
  case OperatorType::Divide:      out << "/"; break;
  case OperatorType::Equals:      out << "=="; break;
  case OperatorType::NotEquals:   out << "!="; break;
  case OperatorType::LessThan:    out << "<"; break;
  case OperatorType::GreaterThan: out << ">"; break;
  }

  out << " " << *o.rexpr;

  return out;
}
std::ostream & operator<< (std::ostream & out, const Expr & e) {
  switch (e.type) {
  case ExprType::Brackets:
    out << *e._brackets.lexpr << "[" << *e._brackets.rexpr << "]"; break;
  case ExprType::Call:
    out << e._call.functionName << "(" << e._call.arguments << ")"; break;
  case ExprType::Dot:
    out << e._dot.name << "." << *e._dot.lexpr; break;
  case ExprType::Literal:
    out << e._literal.i; break;
  case ExprType::Operator:
    out << e._operator; break;
  case ExprType::Variable:
    out << e._variable.name; break;
  }

  return out;
}
std::ostream & operator<< (std::ostream & out, const Stmt & s) {
  switch (s.type) {
  case StmtType::Assign:
    out << s._assign.lexpr << "=" << s._assign.rexpr; break;
   case StmtType::Expr:
     out << s._expr; break;
  case StmtType::If:
    out << "if (" << s._if.condition << ")\n" << s._if.body; break;
  case StmtType::Return:
    out << "return " << s._return.expr; break;
  case StmtType::While:
    out << "while (" << s._while.condition << ")\n" << s._while.body; break;
  }

  return out;
}


void tocFunction (std::ostream & out, const Function & f, bool stub) {
  out << f.returnType << " " << f.name << " (";

  bool comma = false;
  for (auto p : f.parameters) {
    if (comma) out << ", ";
    else comma = true;

    out << p.type << " " << p.name;
  }

  out << ")";

  if (stub) {
    out << ";\n";
  }
  else {
    out << "\n" << f.body;
  }
}
void tocStruct (std::ostream & out, const Struct & s, bool stub) {
  out << "struct " << s.name;
  if (stub) {
    out << ";\n";
    return;
  }
  out << "\n{\n";
  indentation += 2;

  for (auto m : s.members) {
    indent(out);
    out << m << ";\n";
  }

  indent(out, -2);
  out << "};\n";
}
void tocProgram (std::ostream & out, const Program & p) {
  for (auto s : p.structs) {
    tocStruct(out, s, true);
  }
  for (auto s : p.structs) {
    tocStruct(out, s, false);
  }

  for (auto v : p.variables) {
    out << v << ";\n";
  }

  for (auto f : p.functions) {
    tocFunction(out, f, true);
  }
  for (auto f : p.functions) {
    tocFunction(out, f, false);
  }
}




// void toc(std::ostream & o, TocParser::ProgContext * ctx) {
//   for (auto * decl : ctx->decl()) {
//     /**/ if (decl->structDecl() != nullptr) toc_stub(o, decl->structDecl());
//     else if (decl->funcDecl()   != nullptr) toc_stub(o, decl->funcDecl()->func());
//   }
//   for (auto * decl : ctx->decl()) {
//     if (decl->varDecl()    != nullptr) {
//       toc(o, decl->varDecl());
//       out << ";\n";
//     }
//     else if (decl->structDecl() != nullptr) toc(o, decl->structDecl());
//     else if (decl->funcDecl()   != nullptr) toc(o, decl->funcDecl()->func());
//   }
// }
// void toc(std::ostream & o, TocParser::VarDeclContext * ctx) {
//   o
//     << ctx->var()->type()->getText()
//     << " "
//     << ctx->var()->varName()->getText();
  
//   if (ctx->var()->expr() != nullptr) {
//     out << " = ";
//     toc(o, ctx->var()->expr());
//   }
// }
// void toc(std::ostream & o, TocParser::FuncContext * ctx) {
//   o
//     << ctx->type()->getText()
//     << " "
//     << ctx->funcName()->getText()
//     << "(";

//   if (ctx->parameter()->firstParameter() != nullptr) {
//     o
//       << ctx->parameter()->firstParameter()->var()->type()->getText()
//       << " "
//       << ctx->parameter()->firstParameter()->var()->varName()->getText();

//     for (auto * par : ctx->parameter()->additionalParameter()) {
//       o
//         << ", "
//         << par->var()->type()->getText()
//         << " "
//         << par->var()->varName()->getText();
//     }
//   }

//   out << ")\n{\n";

//   toc(o, ctx->body());

//   out << "}\n";
// }
// void toc(std::ostream & o, TocParser::StructDeclContext * ctx) {
//   o
//     << "typedef struct "
//     << ctx->structName()->getText()
//     << "\n{\n";

//   for (auto * member : ctx->structMember()) {
//     if (member->structVar() != nullptr) {
//       o
//         << member->structVar()->var()->type()->getText()
//         << " "
//         << member->structVar()->var()->varName()->getText()
//         << ";\n";
//     }
//   }
//   out << "} "
//     << ctx->structName()->getText()
//     << ";\n";
//   for (auto * member : ctx->structMember()) {
//     if (member->structMethod() != nullptr) {
//       o
//         << member->structMethod()->func()->type()->getText()
//         << " "
//         << ctx->structName()->getText()
//         << "_"
//         << member->structMethod()->func()->funcName()->getText()
//         << "("
//         << ctx->structName()->getText()
//         << " * this";

//       if (member->structMethod()->func()->parameter()->firstParameter() != nullptr) {
//         o
//           << ", "
//           << member->structMethod()->func()->parameter()->firstParameter()->var()->type()->getText()
//           << " "
//           << member->structMethod()->func()->parameter()->firstParameter()->var()->varName()->getText();

//         for (auto * par : member->structMethod()->func()->parameter()->additionalParameter()) {
//           o
//             << ", "
//             << par->var()->type()->getText()
//             << " "
//             << par->var()->varName()->getText();
//         }
//       }

//       out << ")\n{\n";

//       toc(o, member->structMethod()->func()->body());

//       out << "}\n";
//     }
//   }
// }
// void toc(std::ostream & o, TocParser::BodyContext * ctx) {
//   for (auto * stmt : ctx->stmt()) {
//     toc(o, stmt);
//     out << "\n";
//   }
// }
// void toc(std::ostream & o, TocParser::StmtContext * ctx) {
//   /**/ if (ctx->varDecl() != nullptr) toc(o, ctx->varDecl());
//   else if (ctx->conditional() != nullptr) toc(o, ctx->conditional()->ifCond());
//   else if (ctx->loop() != nullptr) toc(o, ctx->loop()->whileLoop());
//   else if (ctx->assignment() != nullptr) toc(o, ctx->assignment());
//   else if (ctx->returnStmt() != nullptr) toc(o, ctx->returnStmt());
//   else if (ctx->expr() != nullptr) toc(o, ctx->expr());

//   if (ctx->conditional() == nullptr && ctx->loop() == nullptr)
//     out << ";";
// }
// void toc(std::ostream & o, TocParser::IfCondContext * ctx) {
//   out << "if (";
//   toc(o, ctx->expr());
//   out << ")\n{\n";
//   toc(o, ctx->body());
//   out << "}\n";
// }
// void toc(std::ostream & o, TocParser::WhileLoopContext * ctx) {
//   out << "while (";
//   toc(o, ctx->expr());
//   out << ")\n{\n";
//   toc(o, ctx->body());
//   out << "}\n";
// }
// void toc(std::ostream & o, TocParser::AssignmentContext * ctx) {
//   toc(o, ctx->identifier());
//   out << " = ";
//   toc(o, ctx->expr());
// }
// void toc(std::ostream & o, TocParser::ReturnStmtContext * ctx) {
//   out << "return ";
//   toc(o, ctx->expr());
// }
// void toc(std::ostream & o, TocParser::ExprContext * ctx) {
//     /**/ if (ctx->funcCall()     != nullptr) toc(o, ctx->funcCall());
//     else if (ctx->identifier()   != nullptr) toc(o, ctx->identifier());
//     else if (ctx->literal()      != nullptr) toc(o, ctx->literal());
//     else if (ctx->subscript()    != nullptr) toc(o, ctx->subscript());
//     else if (ctx->memberAccess() != nullptr) toc(o, ctx->memberAccess());
//     else if (ctx->parenExpr()    != nullptr) toc(o, ctx->parenExpr());
//     else if (ctx->operatorExpr() != nullptr) toc(o, ctx->operatorExpr()->binaryOperator());
// }
// void toc(std::ostream & o, TocParser::NonOpExprContext * ctx) {
//     /**/ if (ctx->funcCall()     != nullptr) toc(o, ctx->funcCall());
//     else if (ctx->identifier()   != nullptr) toc(o, ctx->identifier());
//     else if (ctx->literal()      != nullptr) toc(o, ctx->literal());
//     else if (ctx->subscript()    != nullptr) toc(o, ctx->subscript());
//     else if (ctx->memberAccess() != nullptr) toc(o, ctx->memberAccess());
//     else if (ctx->parenExpr()    != nullptr) toc(o, ctx->parenExpr());
// }
// void toc(std::ostream & o, TocParser::NonSubscriptExprContext * ctx) {
//     /**/ if (ctx->funcCall()     != nullptr) toc(o, ctx->funcCall());
//     else if (ctx->identifier()   != nullptr) toc(o, ctx->identifier());
//     else if (ctx->memberAccess() != nullptr) toc(o, ctx->memberAccess());
//     else if (ctx->parenExpr()    != nullptr) toc(o, ctx->parenExpr());
// }
// void toc(std::ostream & o, TocParser::FuncCallContext * ctx) {
//   o
//     << ctx->funcName()->getText()
//     << "(";
//   for (int i = 0; i < ctx->expr().size(); i++) {
//     if (i != 0) out << ", ";
//     toc(o, ctx->expr(i));
//   }
//   out << ")";
// }
// void toc(std::ostream & o, TocParser::IdentifierContext * ctx) {
//   out << ctx->getText();
// }
// void toc(std::ostream & o, TocParser::LiteralContext * ctx) {
//   if (ctx->INTLIT() != nullptr) out << ctx->INTLIT()->getText();
// }
// void toc(std::ostream & o, TocParser::SubscriptContext * ctx) {
//   toc(o, ctx->nonSubscriptExpr());
//   out << "[";
//   toc(o, ctx->expr());
//   out << "]";
// }
// void toc(std::ostream & o, TocParser::MemberAccessContext * ctx) {
//   toc(o, ctx->identifier(0));
//   out << ".";
//   toc(o, ctx->identifier(1));
// }
// void toc(std::ostream & o, TocParser::ParenExprContext * ctx) {
//   out << "(";
//   toc(o, ctx->expr());
//   out << ")";
// }
// void toc(std::ostream & o, TocParser::BinaryOperatorContext * ctx) {
//   for (int i = 0; i < ctx->BINARY_OPERATOR().size(); i++) {
//     toc(o, ctx->nonOpExpr(i));
//     o
//       << " "
//       << ctx->BINARY_OPERATOR(i)->getText()
//       << " ";
//     toc(o, ctx->nonOpExpr(i + 1));
//   }
// }

// void toc_stub(std::ostream & o, TocParser::FuncContext * ctx) {
//   o
//     << ctx->type()->getText()
//     << " "
//     << ctx->funcName()->getText()
//     << "(";

//   if (ctx->parameter()->firstParameter() != nullptr) {
//     o
//       << ctx->parameter()->firstParameter()->var()->type()->getText()
//       << " "
//       << ctx->parameter()->firstParameter()->var()->varName()->getText();

//     for (auto * par : ctx->parameter()->additionalParameter()) {
//       o
//         << ", "
//         << par->var()->type()->getText()
//         << " "
//         << par->var()->varName()->getText();
//     }
//   }

//   out << ");\n";
// }
// void toc_stub(std::ostream & o, TocParser::StructDeclContext * ctx) {
//   o
//     << "struct "
//     << ctx->structName()->getText()
//     << ";\n";
// }
