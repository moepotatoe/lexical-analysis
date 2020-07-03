#ifndef UNICODE
#define UNICODE
#define UNICODE_WAS_UNDEFINED
#endif

#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include "lexical.h"

#ifdef UNICODE_WAS_UNDEFINED
#undef UNICODE
#endif


void getFile(std::string filename);
void scanFile(std::string filename);

int main(int argc, const char** argv) {
    WIN32_FIND_DATA FindFileData;
    HANDLE hFindFile;
    LPCWSTR file = L"C:\\lexicalanalysis\\*.txt";
    hFindFile = FindFirstFile(file, &FindFileData);
    if (INVALID_HANDLE_VALUE == hFindFile) { std::cout << GetLastError() << std::endl; }
    else {
        std::wstring ws(FindFileData.cFileName);
        std::string s(ws.begin(), ws.end());
        // getFile(s);
        // scanFile(s);
        std::cout << s << std::endl;
    }
    while(FindNextFile(hFindFile, &FindFileData)) {
        std::wstring ws(FindFileData.cFileName);
        std::string s(ws.begin(), ws.end());
        // getFile(s);
        // scanFile(s);
        std::cout << s << std::endl;
    }
    FindClose(hFindFile);
    return 0;
}

void getFile(std::string filename) {
    // if(!filename) {
    //     std::cout << "Invalid file." << std::endl;
    // }
}
