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

bool isSymbol(char ch) {
    if(ch == '(' || ch == ')' || ch == ',' || ch == '{' || ch == '}' || ch == '+' ||
    ch == '-' || ch == '*' || ch == '/' || ch == '&' || ch == '!' || ch == '|' || ch == ';')
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
    std::string sepTemp;
    for (int x = 0; x < token.size(); x++) //Go through each character.
    {
        bool symbol = isSymbol(token[x]);
        if (symbol)
        {
            std::cout<<"\n" << token[x] << "   Symbol\n";//check what symbol it is
            break;
        }
        // else {
        //     std::cout <<" Adding to temp\n";
        //     //temp.append(token[x]);
        // }
    }
    //Once a line has been read without symbols, determine whaty kind of word it is
    determineWord(temp);
    
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