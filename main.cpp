#include <iostream>
#include <fstream>
#include <string>
#include "lexical.h"


void getFile(std::ifstream &file);
void scanFile(std::ifstream &file);

int main(int argc, const char** argv) {
    return 0;
}

/* Checking whether file exists in local directory */
void getFile(std::ifstream &file) {
    std::string filename;
    std::cout << "Enter filename for lexical analysis: ";
    while(true) {
        std::cin >> filename;
        file.open(filename);
        if(!file) { std::cout << "File cannot be found."; }
        else { break; }
    }
}

void scanFile(std::ifstream &file) {
    
}