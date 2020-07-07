#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "lexical.h"
#include "lexical.cpp"

void getFile(std::ifstream &file);
void scanFile(std::ifstream &file);

int main(int argc, const char** argv) {
    std::ifstream testFile;
    getFile(testFile);
    scanFile(testFile);
    
    return 0;
}

/* Checking whether file exists in local directory */
void getFile(std::ifstream &file) {
    std::string filename;
    std::cout << "Enter filename for lexical analysis: ";
    while(true) {
        std::cin >> filename;
        file.open(filename);
        if(!file) { std::cout << "File cannot be found. Enter valid filename: "; }
        else { break; }
    }
}

void scanFile(std::ifstream &file) {
    int x = 0;
    std::string temp;
    std::vector<std::string> textList;
    std::cout << "\nScanning file with words and index numbers...\n";
    while (file >> temp) {
        std::cout << temp << " " << x << std::endl;
        x++;
        lexer(temp); //change how this works later maybe?
        textList.push_back(temp);
    }

    //Test to print out the read in text
    //std::cout << "\n\nPrinting entire vector textList\n";

    //Print vector with whitespace separarting each entry
    // printVector(textList);

<<<<<<< Updated upstream
    for (int x = 0; x < textList.size(); x++)
    {
        lexer(textList[x]);
    }
=======
    // for (int x = 0; x < textList.size(); x++)
    // {
    //     lexer(textList[x]);
    // }
>>>>>>> Stashed changes
    
}