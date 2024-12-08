#include <unordered_set>
#include <string>
#include "../class.h"

//Loi: 3/9 (Khong tinh ham getSize) - Ham getSize okei

namespace std {
    template <>
    struct hash<Class> {
        size_t operator()(const Class& c) const {
            return hash<int>()(c.x); // Băm theo trường dữ liệu 'x' của Class
        }
    };
}

// Template function to get the size of an unordered_multiset
template <typename T>
int getSize(const std::unordered_multiset<T>& ums) {
    return ums.size();
}

// Non-template function implementations for std::unordered_multiset

int intArgument(std::unordered_multiset<int> ums) {
    return getSize(ums);
}

int charArgument(std::unordered_multiset<char> ums) {
    return getSize(ums);
}

int structureArgument(std::unordered_multiset<Class> ums) {
    return getSize(ums);
}

// Functions for unordered_multiset with pointers
int oneLevelBasicArgument(std::unordered_multiset<char*> ums) {
    return getSize(ums);
}

//error
int oneLevelStructureArgument(std::unordered_multiset<Class*> ums) {
    return getSize(ums);
}


//error
// Single-level pointer to unordered_multiset
int oneLevelBasic(std::unordered_multiset<char>* ums) {
    return getSize(*ums);
}



// One-dimensional array of unordered_multiset
int oneDimBasic(std::unordered_multiset<char> ums[]) {
    return getSize(ums[0]);
}

//error
// Functions for unordered_multiset with user-defined Class pointers
int oneLevelStructure(std::unordered_multiset<Class>* ums) {
    return getSize(*ums);
}

int oneDimStructure(std::unordered_multiset<Class> ums[]) {
    return getSize(ums[0]);
}
