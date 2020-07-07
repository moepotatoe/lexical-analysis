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

<<<<<<< Updated upstream
bool isSymbol(char ch) {
    if(ch == '(' || ch == ')' || ch == ',' || ch == '{' || ch == '}' || ch == '+' ||
    ch == '-' || ch == '*' || ch == '/' || ch == '&' || ch == '!' || ch == '|' || ch == ';')
=======
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
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
    std::string sepTemp;
    for (int x = 0; x < token.size(); x++) //Go through each character.
    {
        bool symbol = isSymbol(token[x]);
        if (symbol)
        {
            //Verify with a.txt
            std::cout<<"\n" << token[x] << "   Symbol at pos" << x;//check what symbol it is
        }
=======
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

>>>>>>> Stashed changes
        // else {
        //     std::cout <<" Adding to temp\n";
        //     //temp.append(token[x]);
        // }
    }
    //Once a line has been read without symbols, determine whaty kind of word it is
    //determineWord(temp);
<<<<<<< Updated upstream
    
}


// void splitter(std::string text)
// {
//     std::stringstream intText(text);
//     std::string temp;
//     std::vector<std::string> textList;

//     while(std::getline(intText, temp, ' '))
//     {
//         textList.push_back(temp);
//     }

//     for (auto it = textList.begin() ; it != textList.end(); ++it)
//     {
//         std::cout << *it << std::endl;
//     }
// }
// void navigate(std::string text)
// {
//     std::vector<std::string> userVector;
//     std::string temp; //what we gather to push onto vector
//     for (int x = 0; x < text.length(); x++)
//     {
//         if (text[x] == ' ') {
//             std::cout << "\n";
//             userVector.push_back(temp);
//             std::cout << temp;
//             //call a function here?
//             //reset temp
//         }
//         else {
//             std::cout << text[x];
            
//         }
//     }
// }



/*
bool isSeparator(std::string userString)
{
    std::regex separators("(){}[];,.:");
    for (int x = 0; x < userString.size(); x++)
    {
        if (userVec[x] == )
    }
}*/
=======
}

>>>>>>> Stashed changes
