grammar Toc;

prog: (decl)+ EOF;

decl: varDecl ';'
    | funcDecl
    | structDecl
    ;

varDecl:  'var' var;
var:  varName (':' type) ('=' expr)?;
varInit:  varName (':' type) ('=' expr);

type: typeName (typeModifier)*;
typeModifier: '*' | ('[' (INT_LIT)? ']');


funcDecl: 'func' func;
func: funcName genericDecl? '(' parameter ')' (':' type) body;
parameter: (var (',' var)*)?;

body: '{' stmt* '}';


structDecl: 'struct' structName genericDecl? '{' structMember* '}';
structMember: structVar | structMethod;
structVar: var ';';
structMethod: func;

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

switchStmt: 'switch' identifierExpr switchBody;
switchBody: '{' switchCase* '}';
switchCase: 'case' expr body;

forStmt: 'for' (varInit | assignStmt) ',' expr ',' expr body;

whileStmt: 'while' expr body;

assignStmt: identifierExpr '=' expr;

returnStmt: 'return' expr;

expr: funcExpr
    | litExpr
    | identifierExpr
    | parenExpr
    | accessExpr
    | opExpr;

/* op */
nonOpExpr: funcExpr
         | litExpr
         | identifierExpr
         | parenExpr
         | accessExpr;

/* lit access op */
nonAccessExpr: funcExpr
             | identifierExpr
             | parenExpr;

funcExpr: funcName '(' (expr (',' expr)*)? ')';

opExpr: binaryOp | prefixOp | postfixOp | ternaryOp;
binaryOp: nonOpExpr binary_op nonOpExpr (binary_op nonOpExpr)*;
prefixOp: prefix_op nonOpExpr;
postfixOp: nonOpExpr postfix_op;
ternaryOp: nonOpExpr '?' expr ':' expr;

identifierExpr: varName;

litExpr: INT_LIT | DECIMAL_LIT | STRING_LIT | BOOL_LIT;

accessExpr: nonAccessExpr (accessSubExpr)+;
accessSubExpr: accessMember | accessBrackets;
accessMember: ('.' | '->') identifierExpr;
accessBrackets: '[' expr ']';

parenExpr: '(' expr ')';

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
