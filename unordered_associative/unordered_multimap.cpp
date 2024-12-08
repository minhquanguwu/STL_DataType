#include <unordered_map>
#include <string>
#include <vector>
#include "../class.h"

//Loi: 3/9 (Khong tinh ham getSize) - Ham getSize error

// Template function to get the size of an unordered_multimap
template <typename Key, typename T>
int getSize(const std::unordered_multimap<Key, T>& umm) {
    return umm.size();
}

// Non-template function implementations for std::unordered_multimap

int intArgument(std::unordered_multimap<int, int> umm) {
    return getSize(umm);
}

int charArgument(std::unordered_multimap<int, char> umm) {
    return getSize(umm);
}


int structureArgument(std::unordered_multimap<int, Class> umm) {
    return getSize(umm);
}

// Functions for unordered_multimap with pointers
int oneLevelBasicArgument(std::unordered_multimap<int, char*> umm) {
    return getSize(umm);
}

//error
int oneLevelStructureArgument(std::unordered_multimap<int, Class*> umm) {
    return getSize(umm);
}


//error
// Single-level pointer to unordered_multimap
int oneLevelBasic(std::unordered_multimap<int, char>* umm) {
    return getSize(*umm);
}


// One-dimensional array of unordered_multimap
int oneDimBasic(std::unordered_multimap<int, char> umm[]) {
    return getSize(umm[0]);
}

//error
// Functions for unordered_multimap with user-defined Class pointers
int oneLevelStructure(std::unordered_multimap<int, Class>* umm) {
    return getSize(*umm);
}

int oneDimStructure(std::unordered_multimap<int, Class> umm[]) {
    return getSize(umm[0]);
}
