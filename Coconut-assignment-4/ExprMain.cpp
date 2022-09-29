#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "ExprLexer.h"
#include "ExprParser.h"
using namespace antlrcpp;
using namespace antlr4;
using namespace std;

// taken from ExprParser.cpp
static const string symbolicNames[] = {
  "", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", 
  "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "AND", "ARRAY", 
  "ASM", "BEGIN", "BREAK", "CASE", "CONST", "CONSTRUCTOR", "CONTINUE", "DESTRUCTOR", 
  "DIV", "DO", "DOWNTO", "ELSE", "END", "FALSE", "FILE", "FOR", "FUNCTION", 
  "GOTO", "IF", "IMPLEMENTATION", "IN", "INLINE", "INTERFACE", "LABEL", 
  "MOD", "NIL", "NOT", "OBJECT", "OF", "ON", "OPERATOR", "OR", "PACKED", 
  "PROCEDURE", "PROGRAM", "RECORD", "REPEAT", "SET", "SHL", "SHR", "THEN", 
  "TO", "TRUE", "TYPE", "UNIT", "UNTIL", "USES", "VAR", "WHILE", "WITH", 
  "XOR", "PLUS_OP", "PLUS_EQUAL", "MINUS_OP", "MINUS_EQUAL", "MULT_OP", 
  "MULT_EQUAL", "DIV_OP", "DIV_EQUAL", "ASSIGN", "EQUAL", "NE", "LTEQ", 
  "GTEQ", "LT", "GT", "CARAT", "SEMICOLON", "COLON", "COMMA", "LPAREN", 
  "RPAREN", "LBRACKET", "RBRACKET", "LBRACE", "RBRACE", "LCOMMENT", "RCOMMENT", 
  "IDENTIFIER", "INTEGER", "REAL", "CHARACTER", "STRING", "NEWLINE", "WS"
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
        // std::cout << token->toString() << std::endl;
        ofs << symbolicNames[token->getType()] << " : ";
        ofs << token->getText() << std::endl;
    }
    /*
    // Create a parser which parses the token stream
    // to create a parse tree.
    ExprParser parser(&tokens);
    tree::ParseTree *tree = parser.program();
    // Print the parse tree in Lisp format.
    cout << endl << "Parse tree (Lisp format):" << endl;
    std::cout << tree->toStringTree(&parser) << endl;
    */
    ins.close();
    ofs.close();
    return 0;
}