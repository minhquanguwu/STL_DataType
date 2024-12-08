#include <queue> // <queue>
#include <string>
#include "../class.h"

//Loi: 3/13

int intArgument(std::queue<int> v) {
    return v.size();
}

int charArgument(std::queue<char> v) {
    return v.size();
}


int structureArgument(std::queue<Class> v) {
    return v.size();
}

int stltypeArgument(std::queue<std::queue<char> > v) {
    return v.size();
}


int oneLevelBasicArgument(std::queue<char*> v) {
    return v.size();
}


//error
int oneLevelStructureArgument(std::queue<Class*> v) {
    return v.size();
}


//error
int oneLevelBasic(std::queue<char>* v) {
    return v[0].size();
}


int oneDimBasic(std::queue<char> v[]) {
    return v[0].size();
}

int twoDimBasic(std::queue<char> v[][4]) {
    return v[0][0].size();
}

//error
int oneLevelStructure(std::queue<Class>* v) {
    return v[0].size();
}


int oneDimStructure(std::queue<Class> v[]) {
    return v[0].size();
}

int twoDimStructure(std::queue<Class> v[][4]) {
    return v[0][0].size();
}

int twoDimOneLevel(std::queue<int*> v[][4]) {
    return v[0][0].size();
}