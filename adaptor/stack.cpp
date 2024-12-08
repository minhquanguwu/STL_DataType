#include <stack> // <stack>
#include <string>
#include "../class.h"

//Loi: 3/13

int intArgument(std::stack<int> v) {
    return v.size();
}

int charArgument(std::stack<char> v) {
    return v.size();
}


int structureArgument(std::stack<Class> v) {
    return v.size();
}

int stltypeArgument(std::stack<std::stack<char> > v) {
    return v.size();
}

int oneLevelBasicArgument(std::stack<char*> v) {
    return v.size();
}

//error
int oneLevelStructureArgument(std::stack<Class*> v) {
    return v.size();
}

//error
int oneLevelBasic(std::stack<char>* v) {
    return v[0].size();
}


int oneDimBasic(std::stack<char> v[]) {
    return v[0].size();
}

int twoDimBasic(std::stack<char> v[][4]) {
    return v[0][0].size();
}

//error
int oneLevelStructure(std::stack<Class>* v) {
    return v[0].size();
}

int oneDimStructure(std::stack<Class> v[]) {
    return v[0].size();
}

int twoDimStructure(std::stack<Class> v[][4]) {
    return v[0][0].size();
}


int twoDimOneLevel(std::stack<int*> v[][4]) {
    return v[0][0].size();
}