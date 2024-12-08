#include <list> // <list>
#include <string>
#include "../class.h"

//Loi: 3/11

int intArgument(std::list<int> v) {
    return v.size();
}

int charArgument(std::list<char> v) {
    return v.size();
}

int structureArgument(std::list<Class> v) {
    return v.size();
}

int stltypeArgument(std::list<std::list<char> > v) {
    return v.size();
}

int oneLevelBasicArgument(std::list<char*> v) {
    return v.size();
}

//error
int oneLevelStructureArgument(std::list<Class*> v) {
    return v.size();
}

//error
int oneLevelBasic(std::list<char>* v) {
    return v[0].size();
}


int oneDimBasic(std::list<char> v[]) {
    return v[0].size();
}


int twoDimBasic(std::list<char> v[][4]) {
    return v[0][0].size();
}

//error
int oneLevelStructure(std::list<Class>* v) {
    return v[0].size();
}


int oneDimStructure(std::list<Class> v[]) {
    return v[0].size();
}

