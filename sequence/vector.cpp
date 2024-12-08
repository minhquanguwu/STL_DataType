#include <vector> // <vector>
#include <string>
#include "../class.h"

//Loi: 3/12

int intArgument(std::vector<int> v) {
    return v.size();
}

int charArgument(std::vector<char> v) {
    return v.size();
}

int structureArgument(std::vector<Class> v) {
    return v.size();
}

int stltypeArgument(std::vector<std::vector<char> > v) {
    return v.size();
}

int oneLevelBasicArgument(std::vector<char*> v) {
    return v.size();
}

//error
int oneLevelStructureArgument(std::vector<Class*> v) {
    return v.size();
}

//error
int oneLevelBasic(std::vector<char>* v) {
    return v[0].size();
}

int oneDimBasic(std::vector<char> v[]) {
    return v[0].size();
}

//error
int oneLevelStructure(std::vector<Class>* v) {
    return v[0].size();
}


int oneDimStructure(std::vector<Class> v[]) {
    return v[0].size();
}

int twoDimStructure(std::vector<Class> v[][4]) {
    return v[0][0].size();
}

int twoDimOneLevel(std::vector<int*> v[][4]) {
    return v[0][0].size();
}