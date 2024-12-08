#include <valarray>
#include <string>
#include "../class.h"


// Function to get the size of a valarray of integers
int intArgument(std::valarray<int> v) {
    return v.size();
}

// Function to get the size of a valarray of characters
int charArgument(std::valarray<char> v) {
    return v.size();
}


// Function to get the size of a valarray of custom class objects
int structureArgument(std::valarray<Class> v) {
    return v.size();
}

// Pointer-based valarray functions

int oneLevelBasicArgument(std::valarray<char*> v) {
    return v.size();
}


int oneLevelStructureArgument(std::valarray<Class*> v) {
    return v.size();
}
// Element-wise access with single-level pointers

int oneLevelBasic(std::valarray<char>* v) {
    return v->size();
}

// One-dimensional valarray

int oneDimBasic(std::valarray<char> v[]) {
    return v[0].size();
}

int oneLevelStructure(std::valarray<Class>* v) {
    return v[0].size();
}


int oneDimStructure(std::valarray<Class> v[]) {
    return v[0].size();
}

