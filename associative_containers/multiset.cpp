#include <set> // for std::multiset
#include <string>
#include "../class.h"

// Function to get the size of a multiset
template <typename T>
int getSize(const std::multiset<T>& ms) {
    return ms.size();
}

//Loi: 3/10 (Khong tinh ham getSize) - Ham getSize okei


// Basic argument types with std::multiset
int intArgument(std::multiset<int> ms) {
    return getSize(ms);
}

int charArgument(std::multiset<char> ms) {
    return getSize(ms);
}



int structureArgument(std::multiset<Class> ms) {
    return getSize(ms);
}



// Multisets with pointers
int oneLevelBasicArgument(std::multiset<char*> ms) {
    return getSize(ms);
}

//error
int oneLevelStructureArgument(std::multiset<Class*> ms) {
    return getSize(ms);
}


//error
// Single-level pointer to multiset
int oneLevelBasic(std::multiset<char>* ms) {
    return getSize(*ms);
}


// One-dimensional array of multiset
int oneDimBasic(std::multiset<char> ms[]) {
    return getSize(ms[0]);
}

//error
// Multiset containing user-defined Class pointers
int oneLevelStructure(std::multiset<Class>* ms) {
    return getSize(*ms);
}


int oneDimStructure(std::multiset<Class> ms[]) {
    return getSize(ms[0]);
}


// Two-dimensional array with multiset containing int pointers
int twoDimOneLevel(std::multiset<int*> ms[4]) {
    return getSize(ms[0]);
}
