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

/* Reading through file and checking each lexical argument */
void scanFile(std::ifstream &file) {
    std::string readLine;
    std::vector<char> token;
    char nextChar;
    int temp;
    while(getline(file, readLine)) {
        for(int i = 0; i < readLine.length(); i++) {
            temp = i;
            nextChar = readLine[i];

            token.push_back(readLine[i]);

            if(isWhiteSpace(nextChar)) {
                token.pop_back();
                analyzeToken(token);
                token.clear();
            }
            else if(isSymbol(nextChar)) {
                token.pop_back();
                analyzeToken(token);
                token.clear();
                token.push_back(nextChar);
                token.clear();
            }
        }
    }
}