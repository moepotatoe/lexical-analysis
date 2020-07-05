#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include "lexical.h"

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

/* Read through the file and check for arguments */
void scanFile(std::ifstream &file) {
    std::string currToken, readLine;
    char next;
    std::string myNumber = "", myString = "";
    int temp;
    std::vector<char> token;

    while(getline(file, readLine)) {
        for (int i = 0; i < readLine.length(); i++) {
            temp = i;
            next = readLine[i];

            token.push_back(readLine[i]);
        }
    } 
}
