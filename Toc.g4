grammar Toc;

prog: (decl)+ EOF;

decl: varDecl
    | funcDecl
    | structDecl
    ;

varDecl:  'var' var;
var:  varName (':' type) ('=' expr)?;

type: typeName;


funcDecl: 'func' func;
func: funcName '(' parameter ')' (':' type) body;
parameter: (var (',' var)*)?;

body: '{' stmt* '}';


structDecl: 'struct' structName '{' structMember* '}';
structMember: structVar | structMethod;
structVar: var;
structMethod: func;


stmt: (varDecl
     | conditional
     | loop
     | assignment
     | returnStmt
     | expr) ;

conditional: ifCond;
ifCond: 'if' expr body;

loop: whileLoop;
whileLoop: 'while' expr body;

assignment: identifier '=' expr;

returnStmt: 'return' expr;

expr: funcCall
    | literal
    | identifier
    | subscript
    | memberAccess
    | parenExpr
    | operatorExpr;

nonOpExpr: funcCall
         | literal
         | identifier
         | subscript
         | memberAccess
         | parenExpr;

nonSubscriptExpr: funcCall
                | literal
                | identifier
                | memberAccess
                | parenExpr;

nonAccessExpr: funcCall
             | literal
             | identifier
             | subscript
             | parenExpr
             | operatorExpr;

funcCall: funcName '(' (expr (',' expr)*)? ')';

operatorExpr: binaryOperator;
binaryOperator: nonOpExpr BINARY_OPERATOR nonOpExpr (BINARY_OPERATOR nonOpExpr)*;

identifier: varName;

literal: INTLIT;

subscript: nonSubscriptExpr '[' expr ']';

memberAccess: identifier '.' identifier;

parenExpr: '(' expr ')';

funcName: NAME;
varName: NAME;
typeName: NAME;
structName: NAME;


BINARY_OPERATOR:
    '+'  | '-'  | '*' | '/'
  | '==' | '!='
  | '<'  | '>';
INTLIT: ('+' | '-')? [0-9]+;
NAME: ([a-z] | [A-Z] | [0-9])+;
WS: [ \t\r\n]+ -> skip;
NEWLINE: [\r\n]+;
