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

type: namespaceSpecifier* typeName genericInstantiation? (typeModifier)*;
typeModifier: '*' | ('[' (INT_LIT)? ']');

namespaceSpecifier: typeName '::';

funcDecl: 'func' func;
func: funcName genericDecl? '(' parameter ')' (':' type) (body | ';');
parameter: (var (',' var)*)?;

body: '{' stmt* '}';


structDecl: 'struct' structName genericDecl? '{' structMember* '}';
structMember: privateDecl? structVar | structMethod;
structVar: var ';';
structMethod: func;
privateDecl: 'private';

genericDecl: '<' typeName (',' typeName)* '>';
genericInstantiation: '<' type (',' type)* '>';

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

expr: namespaceSpecifier* funcName genericInstantiation? '(' (expr (',' expr)*)? ')' #funcExpr
    | expr '.' funcName genericInstantiation? '(' (expr (',' expr)*)? ')'            #methodExpr
    | literal                          #litExpr
    | '(' expr ')'                     #parenExpr
    | expr (dot | arrow) varName       #dotExpr
    | prefix_op expr                   #prefixOpExpr
    | expr postfix_op                  #postfixOpExpr
    | expr binary_op expr              #binaryOpExpr
    | expr '?' expr ':' expr           #ternaryOpExpr
    | expr '[' expr ']'                #bracketExpr
    | namespaceSpecifier* varName      #identifierExpr
    ;

dot: '.';
arrow: '->';

literal: INT_LIT | DECIMAL_LIT | StringLit | BOOL_LIT;

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
BOOL_LIT: 'true' | 'false';
StringLit: '"' CharSeq '"';

fragment CharSeq: Char+;
fragment Char: ~["\\\r\n]
             | '\\' ['"?abfnrtv\\]
             | '\\\n'
             | '\\\r\n'
             ;

NAME: ([a-z] | [A-Z] | '_') ([a-z] | [A-Z] | [0-9] | '_')*;
WS: [ \t\r\n]+ -> skip;
NEWLINE: [\r\n]+;
COMMENT: '//' .*? '\n' -> skip;
