grammar Toc;

prog: (decl)+ EOF;

decl: varDecl
    | funcDecl
    | structDecl
    ;

varDecl:  'var' var;
var:  varName (':' type) ('=' expr)?;
varInit:  varName (':' type) ('=' expr);

type: typeName (typeModifier)*;
typeModifier: '*' | '[' NUMBER? ']';


funcDecl: 'func' func;
func: funcName '(' parameter ')' (':' type) body;
parameter: (var (',' var)*)?;

body: '{' stmt* '}';


structDecl: 'struct' structName '{' structMember* '}';
structMember: structVar | structMethod;
structVar: var;
structMethod: func;


stmt: varDecl
    | ifStmt
    | switchStmt
    | forStmt
    | whileStmt
    | assignStmt
    | returnStmt
    | expr;

ifStmt: 'if' expr body ('else' 'if' expr body)* ('else' body)?;

switchStmt: 'switch' identifierExpr switchBody;
switchBody: '{' ('case' expr body)* '}';

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
binaryOp: nonOpExpr BINARY_OP nonOpExpr (BINARY_OP nonOpExpr)*;
prefixOp: PREFIX_OP nonOpExpr;
postfixOp: nonOpExpr POSTFIX_OP;
ternaryOp: nonOpExpr '?' expr ':' expr;

identifierExpr: varName;

litExpr: INT_LIT | DECIMAL_LIT | STRING_LIT | BOOL_LIT;

accessExpr: nonAccessExpr ((('.' | '->') identifierExpr) | ('[' expr ']'))+;

parenExpr: '(' expr ')';

funcName: NAME;
varName: NAME;
typeName: NAME;
structName: NAME;


POSTFIX_OP:
    '++' | '--';
PREFIX_OP:
    [+!~&*-] | POSTFIX_OP;
BINARY_OP:
    [+*/%&<|^>-] |
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
NUMBER: [0-9]+;
