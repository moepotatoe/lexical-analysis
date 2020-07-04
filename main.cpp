#include <iostream>
#include <fstream>
#include <string>
#include <vector>
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
        //std::cin >> filename;
        
        std::string filename = "test1.txt"; //keeping this temporarily here so its easier
        file.open(filename);
        if(!file) { std::cout << "File cannot be found. Enter valid filename: "; }
        else { break; }
    }
}

void scanFile(std::ifstream &file) {
    int x = 0;
    std::string temp;
    std::string text;
    std::cout << "\n";
    while (file >> temp) {
        //std::cout << temp << std::endl;
        std::cout << temp << " ";
        text.append(temp + " ");
    }
    std::cout << "\n";
    std::cout << "Printing with function: ";
    printFunction(text);

    //Testing the indexes of the string
    for (int y = 0; y < text.length(); y++)
    {
        std::cout << text[y] << " " << y << std::endl;
    }
}