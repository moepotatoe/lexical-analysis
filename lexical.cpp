#include <iostream>
#include <string>
#include <vector>
#include <regex>
#include "lexical.h"

#define LIMIT 100

const std::string keywords[LIMIT] = {"auto", "break", "case", "char", "const", "continue", "default",
							      "do", "double", "else", "enum", "extern", "float", "for", "goto",
							      "if", "int", "long", "register", "return", "short", "signed",
							      "sizeof", "static", "struct", "switch", "typedef", "union",
							      "unsigned", "void", "volatile", "while"};

void analyzeToken(std::vector<char> token) {
    std::string currentToken;
    for (int i = 0; i < token.size(); i++) { currentToken += token[i]; }
    if(isKeyword(currentToken)) {
        std::cout << currentToken << "\tkeyword" << std::endl; 
    }
    else if (isIdentifier(currentToken)) {
        std::cout << currentToken << "\tidentifier" << std::endl;
    }
}

bool isKeyword(std::string currentToken) {
    for(int i = 0; i < 32; i++) {
        if(currentToken == keywords[i]) { return true; }
    }
    return false;
}

bool isIdentifier(std::string currentToken) {
    std::regex identifierScan("[_a-zA-Z][_a-zA-Z0-9]{0,30}");
    if (std::regex_match(currentToken, identifierScan)) { return true; }
    else { return false; }
}

bool isWhiteSpace(char ch) {
    if(ch == ' ' || ch == '\n' || ch == '\0') { return true; }
    else { return false; }
}

bool isSymbol(char ch) {
    if(ch == '(' || ch == ')' || ch == ',' || ch == '{' || ch == '}' || ch == '+' ||
    ch == '-' || ch == '*' || ch == '/' || ch == '&' || ch == '!' || ch == '|' || ch == ';') { return true; }
  else { return false; }
}