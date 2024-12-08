#include <map>
#include <string>
#include "../class.h"

//Loi: 2/9 (khong tinh ham getSize) (Ham getSize loi)

// Template function to get the size of a map
template <typename Key, typename T>
int getSize(const std::map<Key, T>& m) {
    return m.size();
}

// Non-template function implementations for std::map
int intArgument(std::map<int, int> m) {
    return getSize(m);
}

int charArgument(std::map<int, char> m) {
    return getSize(m);
}


int structureArgument(std::map<int, Class> m) {
    return getSize(m);
}

int oneLevelBasicArgument(std::map<int, char*> m) {
    return getSize(m);
}


int oneLevelStructureArgument(std::map<int, Class*> m) {
    return getSize(m);
}

//error
int oneLevelBasic(std::map<int, char>* m) {
    return getSize(*m);
}


int oneDimBasic(std::map<int, char> m[]) {
    return getSize(m[0]);
}

//error
int oneLevelStructure(std::map<int, Class>* m) {
    return getSize(*m);
}

int oneDimStructure(std::map<int, Class> m[]) {
    return getSize(m[0]);
}
