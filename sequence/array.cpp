#include <array> // for std::array
#include <string>
#include "../class.h"

//Loi: 4/10

// Basic argument types with std::array
int intArgument(std::array<int, 5> a) {
    return a.size();
}

int charArgument(std::array<char, 5> a) {
    return a.size();
}


int structureArgument(std::array<Class, 5> a) {
    return a.size();
}

// Nested std::array
int stltypeArgument(std::array<std::array<char, 5>, 5> a) {
    return a.size();
}

//error
// Pointers within std::array
int oneLevelBasicArgument(std::array<char*, 5> a) {
    return a.size();
}

//error
int oneLevelStructureArgument(std::array<Class*, 5> a) {
    return a.size();
}

//error
// Single-level pointer to std::array
int oneLevelBasic(std::array<char, 5>* a) {
    return a[0].size();
}


// One-dimensional array of std::array
int oneDimBasic(std::array<char, 5> a[]) {
    return a[0].size();
}

// // Two-dimensional array of std::array
// int twoDimBasic(std::array<std::array<char, 5>, 4> a) {
//     return a[0][0].size();
// }


//error
// Single-level pointer with user-defined Class in std::array
int oneLevelStructure(std::array<Class, 5>* a) {
    return a[0].size();
}


int oneDimStructure(std::array<Class, 5> a[]) {
    return a[0].size();
}

