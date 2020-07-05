#include <iostream>
#include <regex>
#include "lexical.h"

void isIntegerRegex(std::string str) {
    std::regex integerScan("[.0-9]*");
    if (std::regex_match(str, integerScan)) {
        std::cout << "integer\t" << str << std::endl;
    }
}

