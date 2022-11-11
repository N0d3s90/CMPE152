#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "ExprLexer.h"
#include "ExprParser.h"
using namespace antlrcpp;
using namespace antlr4;
using namespace std;

static const string symbolicNames[] = {
  "", "AND", "ARRAY", "ASM", "BEGIN", "BREAK", "CASE", "CONST", "CONSTRUCTOR", 
  "CONTINUE", "DESTRUCTOR", "DIV", "DO", "DOWNTO", "ELSE", "END", "FALSE", 
  "FILE", "FOR", "FUNCTION", "GOTO", "IF", "IMPLEMENTATION", "IN", "INLINE", 
  "INTERFACE", "LABEL", "MOD", "NIL", "NOT", "OBJECT", "OF", "ON", "OPERATOR", 
  "OR", "PACKED", "PROCEDURE", "PROGRAM", "RECORD", "REPEAT", "SET", "SHL", 
  "SHR", "THEN", "TO", "TRUE", "TYPE", "UNIT", "UNTIL", "USES", "VAR", "WHILE", 
  "WITH", "XOR", "WRITE", "WRITELN", "PLUS_OP", "PLUS_EQUAL", "MINUS_OP", 
  "MINUS_EQUAL", "MULT_OP", "MULT_EQUAL", "DIV_OP", "DIV_EQUAL", "ASSIGN", 
  "EQUAL", "NE", "LTEQ", "GTEQ", "LT", "GT", "CARAT", "SEMICOLON", "COLON", 
  "COMMA", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", "LBRACE", "RBRACE", 
  "LCOMMENT", "RCOMMENT", "PERIOD", "IDENTIFIER", "INTEGER", "REAL", "CHARACTER", 
  "STRING", "NEWLINE", "WS"
};

int main(int argc, const char *args[])
{
  if (argc < 3)
  {
    return 1;
  }
ifstream ins;
ofstream ofs;
// Create the input stream.
ins.open(args[1]);
ofs.open(args[2]);
ANTLRInputStream input(ins);
// Create a lexer which scans the input stream
// to create a token stream.
ExprLexer lexer(&input);
CommonTokenStream tokens(&lexer);
// Print the token stream.
ofs << "Tokens:" << endl;
tokens.fill();
for (Token *token : tokens.getTokens())
    {
        //std::cout << token->toString() << std::endl;
        ofs << symbolicNames[token->getType()] << " : ";
        ofs << token->getText() << std::endl;
    }
// Create a parser which parses the token stream
// to create a parse tree.
ExprParser parser(&tokens);
tree::ParseTree *tree = parser.program();
// Print the parse tree in Lisp format.
ofs << endl << "Parse tree (Lisp format):" << endl;
ofs << tree->toStringTree(&parser) << endl;
//std::cout << tree << endl;
return 0;
}