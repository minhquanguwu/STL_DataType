#include <forward_list> // for std::forward_list
#include <string>
#include "../class.h"

//Loi: 3/12 (Khong tinh ham getSize) - Ham getSize okei


// Helper function to calculate the size of a forward_list
template <typename T>
int getSize(const std::forward_list<T>& fl) {
    return std::distance(fl.begin(), fl.end());
}

// Basic argument types with std::forward_list
int intArgument(std::forward_list<int> fl) {
    return getSize(fl);
}

int charArgument(std::forward_list<char> fl) {
    return getSize(fl);
}


int structureArgument(std::forward_list<Class> fl) {
    return getSize(fl);
}

// Nested forward_list
int stltypeArgument(std::forward_list<std::forward_list<char>> fl) {
    return getSize(fl);
}


// Pointers within forward_list
int oneLevelBasicArgument(std::forward_list<char*> fl) {
    return getSize(fl);
}

//error
int oneLevelStructureArgument(std::forward_list<Class*> fl) {
    return getSize(fl);
}

//error
// Single-level pointer to forward_list
int oneLevelBasic(std::forward_list<char>* fl) {
    return getSize(fl[0]);
}


// One-dimensional array of forward_list
int oneDimBasic(std::forward_list<char> fl[]) {
    return getSize(fl[0]);
}

// Two-dimensional array of forward_list (emulated with array of forward_lists)
int twoDimBasic(std::forward_list<std::forward_list<char>> fl[4]) {
    return getSize(fl[0]);
}

//error
// Single-level pointer with user-defined Class in forward_list
int oneLevelStructure(std::forward_list<Class>* fl) {
    return getSize(fl[0]);
}



int oneDimStructure(std::forward_list<Class> fl[]) {
    return getSize(fl[0]);
}

int twoDimStructure(std::forward_list<std::forward_list<Class>> fl[4]) {
    return getSize(fl[0]);
}
