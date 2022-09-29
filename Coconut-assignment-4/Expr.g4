grammar Expr;

program: statement+ ;  // at least one statement

statement : expr NEWLINE
  | IDENTIFIER EQUAL expr NEWLINE
  | NEWLINE   
  ;

expr: expr (MULT_OP|DIV_OP) expr   
| expr (PLUS_OP|MINUS_OP) expr   
| INTEGER
| IDENTIFIER  
| LPAREN expr RPAREN
;

A : 'a' | 'A' ;
B : 'b' | 'B' ;
C : 'c' | 'C' ;
D : 'd' | 'D' ;
E : 'e' | 'E' ;
F : 'f' | 'F' ;
G : 'g' | 'G' ;
H : 'h' | 'H' ;
I : 'i' | 'I' ;
J : 'j' | 'J' ;
K : 'k' | 'K' ;
L : 'l' | 'L' ;
M : 'm' | 'M' ;
N : 'n' | 'N' ;
O : 'o' | 'O' ;
P : 'p' | 'P' ;
Q : 'q' | 'Q' ;
R : 'r' | 'R' ;
S : 's' | 'S' ;
T : 't' | 'T' ;
U : 'u' | 'U' ;
V : 'v' | 'V' ;
W : 'w' | 'W' ;
X : 'x' | 'X' ;
Y : 'y' | 'Y' ;
Z : 'z' | 'Z' ;

AND : A N D;
ARRAY : A R R A Y;
ASM : A S M;
BEGIN : B E G I N ;
BREAK : B R E A K;
CASE : C A S E;
CONST : C O N S T;
CONSTRUCTOR : C O N S T R U C T O R;
CONTINUE : C O N T I N U E;
DESTRUCTOR : D E S T R U C T O R;
DIV : D I V;
DO : D O;
DOWNTO : D O W N T O;
ELSE : E L S E;
END : E N D;
FALSE : F A L S E;
FILE : F I L E;
FOR : F O R;
FUNCTION : F U N C T I O N;
GOTO : G O T O;
IF : I F;
IMPLEMENTATION : I M P L E M E N T A T I O N;
IN : I N;
INLINE : I N L I N E;
INTERFACE : I N T E R F A C E;
LABEL : L A B E L;
MOD : M O D;
NIL : N I L;
NOT : N O T;
OBJECT : O B J E C T;
OF : O F;
ON : O N;
OPERATOR : O P E R A T O R;
OR : O R;
PACKED : P A C K E D;
PROCEDURE : P R O C E D U R E;
PROGRAM : P R O G R A M;
RECORD : R E C O R D;
REPEAT : R E P E A T;
SET : S E T;
SHL : S H L;
SHR : S H R;
THEN : T H E N;
TO : T O;
TRUE : T R U E;
TYPE : T Y P E;
UNIT : U N I T;
UNTIL : U N T I L;
USES : U S E S;
VAR : V A R;
WHILE : W H I L E;
WITH : W I T H;
XOR : X O R;

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

IDENTIFIER : [a-zA-Z]+;
INTEGER : [0-9]+;
REAL : INTEGER '.' INTEGER;
CHARACTER : '\'' ~('\'') '\'';
STRING : '\'\'' | '\'' ~('\'')* '\'';
NEWLINE : '\r' ? '\n' -> skip;
WS : [ \t]+ -> skip ; 