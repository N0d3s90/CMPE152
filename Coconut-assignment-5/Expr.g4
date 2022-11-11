grammar Expr;

program: PROGRAM IDENTIFIER SEMICOLON statement EOF;

compoundstatement: BEGIN statement+ END (SEMICOLON|PERIOD);
assignstatement: variable ASSIGN expr SEMICOLON;
repeatstatement: REPEAT statement+ UNTIL expr SEMICOLON;
whilestatement: WHILE expr DO statement;
forstatement: FOR variable ASSIGN expr (TO|DOWNTO) expr DO statement;
ifstatement: IF expr THEN statement (ELSE statement)? SEMICOLON;
casestatement: CASE expr OF caselist+ END SEMICOLON;
caselist: expr COLON statement;
statement : compoundstatement 
| assignstatement 
| repeatstatement 
| whilestatement 
| forstatement 
| ifstatement 
| casestatement 
| write SEMICOLON?
| writeln SEMICOLON?
| expr SEMICOLON;
variable: IDENTIFIER;
integer_const: INTEGER;
real_const : REAL;
character_const : CHARACTER;
string_const: STRING;
write: WRITE LPAREN (character_const|string_const|variable) (COMMA expr)* RPAREN;
writeln: WRITELN LPAREN string_const (COMMA expr)* RPAREN;
expr: expr (MULT_OP|DIV_OP) expr   
| expr (PLUS_OP|MINUS_OP) expr   
| expr (EQUAL|NE|LT|LTEQ|GT|GTEQ) expr
| LPAREN expr RPAREN
| variable
| integer_const
| character_const
| real_const
;

AND :('a'|'A')('n'|'N')('d'|'D');
ARRAY :('a'|'A')('r'|'R')('r'|'R')('a'|'A')('y'|'Y');
ASM :('a'|'A')('s'|'S')('m'|'M');
BEGIN :('b'|'B')('e'|'E')('g'|'G')('i'|'I')('n'|'N') ;
BREAK :('b'|'B')('r'|'R')('e'|'E')('a'|'A')('k'|'K');
CASE : ('c'|'C')('a'|'A')('s'|'S')('e'|'E');
CONST :('c'|'C')('o'|'O')('n'|'N')('s'|'S')('t'|'T');
CONSTRUCTOR :('c'|'C')('o'|'O')('n'|'N')('s'|'S')('t'|'T')('r'|'R')('u'|'U')('c'|'C')('t'|'T')('o'|'O')('r'|'R');
CONTINUE :('c'|'C')('o'|'O')('n'|'N')('t'|'T')('i'|'I')('n'|'N')('u'|'U')('e'|'E');
DESTRUCTOR :('d'|'D')('e'|'E')('s'|'S')('t'|'T')('r'|'R')('u'|'U')('c'|'C')('t'|'T')('o'|'O')('r'|'R');
DIV :('d'|'D')('i'|'I')('v'|'V');
DO :('d'|'D')('o'|'O');
DOWNTO :('d'|'D')('o'|'O')('w'|'W')('n'|'N')('t'|'T')('o'|'O');
ELSE :('e'|'E')('l'|'L')('s'|'S')('e'|'E');
END :('e'|'E')('n'|'N')('d'|'D');
FALSE : ('f'|'F')('a'|'A')('l'|'L')('s'|'S')('e'|'E');
FILE :('f'|'F')('i'|'I')('l'|'L')('e'|'E');
FOR :('f'|'F')('o'|'O')('r'|'R');
FUNCTION :('f'|'F')('u'|'U')('n'|'N')('c'|'C')('t'|'T')('i'|'I')('o'|'O')('n'|'N');
GOTO :('g'|'G')('o'|'O')('t'|'T')('o'|'O');
IF :('i'|'I')('f'|'F');
IMPLEMENTATION :('i'|'I')('m'|'M')('p'|'P')('l'|'L')('e'|'E')('m'|'M')('e'|'E')('n'|'N')('t'|'T')('a'|'A')('t'|'T')('i'|'I')('o'|'O')('n'|'N');
IN :('i'|'I')('n'|'N');
INLINE :('i'|'I')('n'|'N')('l'|'L')('i'|'I')('n'|'N')('e'|'E');
INTERFACE :('i'|'I')('n'|'N')('t'|'T')('e'|'E')('r'|'R')('f'|'F')('a'|'A')('c'|'C')('e'|'E');
LABEL : ('l'|'L')('a'|'A')('b'|'B')('e'|'E')('l'|'L');
MOD :('m'|'M')('o'|'O')('d'|'D');
NIL :('n'|'N')('i'|'I')('l'|'L');
NOT :('n'|'N')('o'|'O')('t'|'T');
OBJECT :('o'|'O')('b'|'B')('j'|'J')('e'|'E')('c'|'C')('t'|'T');
OF :('o'|'O')('f'|'F');
ON :('o'|'O')('n'|'N');
OPERATOR :('o'|'O')('p'|'P')('e'|'E')('r'|'R')('a'|'A')('t'|'T')('o'|'O')('r'|'R');
OR :('o'|'O')('r'|'R');
PACKED :('p'|'P')('a'|'A')('c'|'C')('k'|'K')('e'|'E')('d'|'D');
PROCEDURE :('p'|'P')('r'|'R')('o'|'O')('c'|'C')('e'|'E')('d'|'D')('u'|'U')('r'|'R')('e'|'E');
PROGRAM :('p'|'P')('r'|'R')('o'|'O')('g'|'G')('r'|'R')('a'|'A')('m'|'M');
RECORD :('r'|'R')('e'|'E')('c'|'C')('o'|'O')('r'|'R')('d'|'D');
REPEAT :('r'|'R')('e'|'E')('p'|'P')('e'|'E')('a'|'A')('t'|'T');
SET :('s'|'S')('e'|'E')('t'|'T');
SHL :('s'|'S')('h'|'H')('l'|'L');
SHR :('s'|'S')('h'|'H')('r'|'R');
THEN :('t'|'T')('h'|'H')('e'|'E')('n'|'N');
TO :('t'|'T')('o'|'O');
TRUE :('t'|'T')('r'|'R')('u'|'U')('e'|'E');
TYPE :('t'|'T')('y'|'Y')('p'|'P')('e'|'E');
UNIT :('u'|'U')('n'|'N')('i'|'I')('t'|'T');
UNTIL :('u'|'U')('n'|'N')('t'|'T')('i'|'I')('l'|'L');
USES:('u'|'U')('s'|'S')('e'|'E')('s'|'S');
VAR :('v'|'V')('a'|'A')('r'|'R');
WHILE :('w'|'W')('h'|'H')('i'|'I')('l'|'L')('e'|'E');
WITH :('w'|'W')('i'|'I')('t'|'T')('h'|'H');
XOR :('x'|'X')('o'|'O')('r'|'R');

WRITE :('w'|'W')('r'|'R')('i'|'I')('t'|'T')('e'|'E');
WRITELN :('w'|'W')('r'|'R')('i'|'I')('t'|'T')('e'|'E')('l'|'L')('n'|'N');

PLUS_OP : '+';
PLUS_EQUAL : '+=';
MINUS_OP : '-';
MINUS_EQUAL : '-=';
MULT_OP : '*';
MULT_EQUAL : '*=';
DIV_OP : '/';
DIV_EQUAL : '/=';
ASSIGN : ':='; 
EQUAL : '=';
NE : '<>';
LTEQ : '<=';
GTEQ : '>=';
LT : '<'; 
GT : '>';
CARAT : '^'; 
SEMICOLON : ';';
COLON : ':';
COMMA : ',';
LPAREN : '('; 
RPAREN : ')'; 
LBRACKET : '['; 
RBRACKET : ']';
LBRACE : '{';
RBRACE : '}';
LCOMMENT : '(*'; 
RCOMMENT : '*)';
PERIOD: '.';

IDENTIFIER : [a-zA-Z]+;
INTEGER : [0-9]+;
REAL : INTEGER '.' INTEGER;
CHARACTER : '\'' ~('\'') '\'';
STRING : '\'\'' | '\'' ~('\'')* '\'';
NEWLINE : '\r' ? '\n' -> skip;
WS : [ \t]+ -> skip ; 