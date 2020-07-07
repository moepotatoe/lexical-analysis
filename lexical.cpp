#define fix_fft
#include "lexical.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <regex>

void printVector(std::vector<std::string> userVec)
{
    for (auto it = userVec.begin() ; it != userVec.end(); ++it)
    {
        std::cout << *it << " ";
    }
}

bool isSeparator(char ch) {
    // std::string separators = {"()[]{};"};
    // bool symbolCheck = false;
    // for (int x = 0; x < separators.length(); x++)
    // {
    //     if (separators[x] == ch)
    //     {
    //         symbolCheck = true;
    //     }
    //     else {
    //       symbolCheck = false;
    //     }
    // }
    // return symbolCheck;
    if(ch == '(' || ch == ')' || ch == '{' || ch == '}' || ch == ';' || ch == '[' || ch == ']')
    { return true; }
  else { return false; }
}
//     if(ch == '(' || ch == ')' || ch == ',' || ch == '{' || ch == '}' || ch == '+' ||
//     ch == '-' || ch == '*' || ch == '/' || ch == '&' || ch == '!' || ch == '|' || ch == ';')
//     { lexeme = "symbol";
//     return true; }
//   else { return false; }

bool isOperator(char ch) {
    if(ch == '<' || ch == '>' || ch == '+' || ch == '-' || ch == '/' || ch == '*' || ch == ':' || ch == '=')
    { return true; }
  else { return false; }
}

void determineWord(std::string word)
{
     std::cout<<"\n" << word << "   Word\n";
}

void lexer(std::string token)
{
    std::string temp;
    std::string lexResult = "";
    for (int x = 0; x < token.size(); x++) //Go through each character.
    {
        //bool separator = isSeparator(token[x]);
        if (bool separatorCheck = isSeparator(token[x]))
        {
            //Verify with a.txt, check what symbol it is
            std::cout << token[x] << "   Separator at pos" << x << "\n";
            //Return token[x] and string with separator
        }
        else if (bool operatorCheck = isOperator(token[x]))
        {
            std::cout << token[x] << "   Operator at pos" << x << "\n";
            //Return token[x] and string with operator
        }

        //TODO: Identifier and integer FSMs

        // else {
        //     std::cout <<" Adding to temp\n";
        //     //temp.append(token[x]);
        // }
    }
    //Once a line has been read without symbols, determine whaty kind of word it is
    //determineWord(temp);
}

