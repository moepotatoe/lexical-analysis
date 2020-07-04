#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
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

void scanFile(std::ifstream &file) {
    int x = 0;
    std::string temp;
    std::vector<std::string> textList;
    std::cout << "\nScanning file...\n";
    while (file >> temp) {
        std::cout << temp << std::endl;
        textList.push_back(temp);
    }
    std::cout << "\n\n";

    //Print vector with whitespace separarting each entry
    printVector(textList);
}