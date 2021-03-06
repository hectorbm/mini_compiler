#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SYMTABLE_SIZE 15
#define MAXLEN_VARTYPE 5
#include "../SyntaxTree/syntax_tree.h"

struct symbol{
    int linesNo; //Number of lines the symbol appears
    int * lines; //Dynamic array with the line number of each appearance
    char * varName; //Symbol name in the program
    char var_type[5];
};

int getSymbolMemoryPosition(char * varName);
int addSymbol(char * varName);
void addLineToSymbol(int lineNo, char * varName);
void showSymbolTable();
void buildSymtab(SyntaxTree * st);
void setSymbolVarType(char * varName, char * varType);
char * getSymbolVarType(char * varName);