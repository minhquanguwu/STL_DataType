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

// Template function to get the size of an unordered_set
template <typename T>
int getSize(const std::unordered_set<T>& us) {
    return us.size();
}


// Non-template function implementations for std::unordered_set

int intArgument(std::unordered_set<int> us) {
    return getSize(us);
}

int charArgument(std::unordered_set<char> us) {
    return getSize(us);
}


int structureArgument(std::unordered_set<Class> us) {
    return getSize(us);
}

// Functions for unordered_set with pointers
int oneLevelBasicArgument(std::unordered_set<char*> us) {
    return getSize(us);
}

//error
int oneLevelStructureArgument(std::unordered_set<Class*> us) {
    return getSize(us);
}

//error
// Single-level pointer to unordered_set
int oneLevelBasic(std::unordered_set<char>* us) {
    return getSize(*us);
}

// One-dimensional array of unordered_set
int oneDimBasic(std::unordered_set<char> us[]) {
    return getSize(us[0]);
}

//error
// Functions for unordered_set with user-defined Class pointers
int oneLevelStructure(std::unordered_set<Class>* us) {
    return getSize(*us);
}


int oneDimStructure(std::unordered_set<Class> us[]) {
    return getSize(us[0]);
}
