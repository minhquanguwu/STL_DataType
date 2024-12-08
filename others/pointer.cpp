
//pointer
#include <iostream>

int intArgument(int* v) {
    return sizeof(v);
}

int charArgument(char* v) {
    return sizeof(v);
}

//array
int oneDimBasic(char v[]) {
    return sizeof(v);
}

int twoDimBasic(char v[][4]) {
    return sizeof(v);
}