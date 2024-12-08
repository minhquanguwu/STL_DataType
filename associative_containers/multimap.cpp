#include <map>
#include <string>
#include "../class.h"

//Loi: 2/9 (khong tinh ham getSize) (Ham getSize loi)

// Template function to get the size of a multimap
template <typename Key, typename T>
int getSize(const std::multimap<Key, T>& mm) {
    return mm.size();
}

// Non-template function implementations for std::multimap
int intArgument(std::multimap<int, int> mm) {
    return getSize(mm);
}

int charArgument(std::multimap<int, char> mm) {
    return getSize(mm);
}

int structureArgument(std::multimap<int, Class> mm) {
    return getSize(mm);
}

int oneLevelBasicArgument(std::multimap<int, char*> mm) {
    return getSize(mm);
}

int oneLevelStructureArgument(std::multimap<int, Class*> mm) {
    return getSize(mm);
}

// Error
int oneLevelBasic(std::multimap<int, char>* mm) {
    return getSize(*mm);
}

// Error
int oneLevelStructure(std::multimap<int, Class>* mm) {
    return getSize(*mm);
}

int oneDimBasic(std::multimap<int, char> mm[]) {
    return getSize(mm[0]);
}

int oneDimStructure(std::multimap<int, Class> mm[]) {
    return getSize(mm[0]);
}