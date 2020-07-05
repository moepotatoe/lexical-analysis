// - - - - lexical.hpp - - - - //
/* This header includes all the 
   functions that returns true or 
   false based on the specific argument 
*/
void analyzeToken(std::vector<char> token);

bool isKeyword(std::string currentToken);
bool isIdentifier(std::string currentToken);
bool isWhiteSpace(char ch);
bool isSymbol(char ch);
