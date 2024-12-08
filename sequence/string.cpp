// http://www.cplusplus.com/reference/string/string/
#include <string>



int stringBasic(std::string x){return 0;}

int stringRef(std::string& x){return 0;}

int stringPointer0(std::string* x){return 0;}
int stringPointer1(std::string** x){return 0;}
int stringPointer2(std::string*** x){return 0;}

int stringArray0(std::string x[]){return 0;}
int stringArray1(std::string x[3]){return 0;}
int stringArray2(std::string x[2][3]){return 0;}
int stringArray3(std::string x[][3]){return 0;}