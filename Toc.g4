grammar Toc;

prog: (decl)+ EOF;

decl: varDecl ';'
    | funcDecl
    | structDecl
    | namespaceDecl
    ;

namespaceDecl: 'namespace' typeName '{' decl* '}';

varDecl:  'var' var;
var:  varName (':' type) ('=' expr)?;
varInit:  varName (':' type) ('=' expr);

type: namespaceSpecifier* typeName (typeModifier)*;
typeModifier: '*' | ('[' (INT_LIT)? ']');

namespaceSpecifier: typeName '::';

funcDecl: 'func' func;
func: funcName genericDecl? '(' parameter ')' (':' type) body;
parameter: (var (',' var)*)?;

body: '{' stmt* '}';


structDecl: 'struct' structName genericDecl? '{' structMember* '}';
structMember: privateDecl? structVar | structMethod;
structVar: var ';';
structMethod: func;
privateDecl: 'private';

genericDecl: '<' typeName (',' typeName)* '>';

stmt: varDecl ';'
    | ifStmt
    | switchStmt
    | forStmt
    | whileStmt
    | assignStmt ';'
    | returnStmt ';'
    | expr ';';

ifStmt: 'if' expr body elseIfStmt* elseStmt?;
elseIfStmt: 'else' 'if' expr body;
elseStmt: 'else' body;

switchStmt: 'switch' expr switchBody;
switchBody: '{' switchCase* '}';
switchCase: 'case' expr body;

forStmt: 'for' varInit ',' expr ',' expr body;

whileStmt: 'while' expr body;

assignStmt: expr '=' expr;

returnStmt: 'return' expr;

expr: namespaceSpecifier* funcName '(' (expr (',' expr)*)? ')' #funcExpr
    | expr '.' funcName '(' (expr (',' expr)*)? ')'            #methodExpr
    | literal                                                  #litExpr
    | '(' expr ')'                                             #parenExpr
    | expr '.' varName                                         #dotExpr
    | prefix_op expr                                           #prefixOpExpr
    | expr postfix_op                                          #postfixOpExpr
    | expr binary_op expr                                      #binaryOpExpr
    | expr '?' expr ':' expr                                   #ternaryOpExpr
    | expr '[' expr ']'                                        #bracketExpr
    | namespaceSpecifier* varName                              #identifierExpr
    ;

literal: INT_LIT | DECIMAL_LIT | STRING_LIT | BOOL_LIT;

funcName: NAME;
varName: NAME;
typeName: NAME;
structName: NAME;


postfix_op:
    '++' | '--';
prefix_op:
    '+' | '-' | '!' | '~' | '&' | '*' | postfix_op;
binary_op:
    '+' | '-' | '*' | '/' | '%' | '&' | '<' | '|' | '^' | '>' |
    '==' | '!=' | '<=' | '>=' | '<'  | '>' |
    '<<' | '>>' | '||' | '&&' | '&=' | '|=' | '^=' |
    '<<=' | '>>=' | '+=' | '-=' | '*=' | '/=' | '%=';

INT_LIT: ('+' | '-')? [0-9]+;
DECIMAL_LIT: ('+' | '-')* [0-9]+ '.' [0-9]+;
STRING_LIT: '"' [^"]* '"';
BOOL_LIT: 'true' | 'false';

NAME: ([a-z] | [A-Z] | [0-9])+;
WS: [ \t\r\n]+ -> skip;
NEWLINE: [\r\n]+;
