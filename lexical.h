// - - - - lexical.hpp - - - - //
/* This header includes all the 
   functions that returns true or 
   false based on the specific argument 
*/

bool isIdentifier(char ch);
bool isWhiteSpace(char ch);
bool isString(char ch);
bool isIntegerRegex(char ch);
bool isFloatRegex(char ch);
bool isDoubleRegex(char ch);
bool isRelational(char ch);
bool isKeyword(char ch);
bool isComment(char ch);

// void resultOfToken(std::vector<char> token);