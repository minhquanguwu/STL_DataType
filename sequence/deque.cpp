#include <deque> // for std::deque
#include <string>
#include "../class.h"


//Loi: 3/12

int intArgument(std::deque<int> d) {
    return d.size();
}

int charArgument(std::deque<char> d) {
    return d.size();
}


int structureArgument(std::deque<Class> d) {
    return d.size();
}

int stltypeArgument(std::deque<std::deque<char>> d) {
    return d.size();
}


int oneLevelBasicArgument(std::deque<char*> d) {
    return d.size();
}


int oneLevelStructureArgument(std::deque<Class*> d) {
    return d.size();
}

//error
int oneLevelBasic(std::deque<char>* d) {
    return d[0].size();
}

//error
int oneDimBasic(std::deque<char> d[]) {
    return d[0].size();
}

int twoDimBasic(std::deque<char> d[][4]) {
    return d[0][0].size();
}

//error
int oneLevelStructure(std::deque<Class>* d) {
    return d[0].size();
}


int oneDimStructure(std::deque<Class> d[]) {
    return d[0].size();
}

int twoDimStructure(std::deque<Class> d[][4]) {
    return d[0][0].size();
}
