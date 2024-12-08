#include <set> // <set>
#include <string>
#include "../class.h"

//Loi: 3/13

int intArgument(std::set<int> v) {
    return v.size();
}

int charArgument(std::set<char> v) {
    return v.size();
}


int structureArgument(std::set<Class> v) {
    return v.size();
}

int stltypeArgument(std::set<std::set<char> > v) {
    return v.size();
}


int oneLevelBasicArgument(std::set<char*> v) {
    return v.size();
}



//error
int oneLevelStructureArgument(std::set<Class*> v) {
    return v.size();
}


//error
int oneLevelBasic(std::set<char>* v) {
    return v[0].size();
}


int oneDimBasic(std::set<char> v[]) {
    return v[0].size();
}

int twoDimBasic(std::set<char> v[][4]) {
    return v[0][0].size();
}


//error
int oneLevelStructure(std::set<Class>* v) {
    return v[0].size();
}


int oneDimStructure(std::set<Class> v[]) {
    return v[0].size();
}

int twoDimStructure(std::set<Class> v[][4]) {
    return v[0][0].size();
}



int twoDimOneLevel(std::set<int*> v[][4]) {
    return v[0][0].size();
}