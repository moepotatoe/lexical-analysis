#include "lexical.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

void printVector(std::vector<std::string> userVec)
{
    for (auto it = userVec.begin() ; it != userVec.end(); ++it)
    {
        std::cout << *it << " ";
    }
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
>>>>>>> Stashed changes
