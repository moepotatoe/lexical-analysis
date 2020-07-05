#include <regex>
#ifndef LEXICAL_H
#define LEXICAL_H

// - - - - lexical.hpp - - - - //
/* This header includes all the functions that returns true or false based on the specific argument */
bool isIdentifierRegex(char ch);
void isIntegerRegex(std::string str);
bool isWhiteSpace(char ch);
bool isString(char ch);
bool isRelational(char ch);
bool isKeyword(char ch);
bool isComment(char ch);

void printMatch(std::string str, std::regex reg);

// void resultOfToken(std::vector<char> token);

#endif