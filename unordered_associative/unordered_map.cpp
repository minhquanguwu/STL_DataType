#include <unordered_map>
#include <string>
#include "../class.h"

//Loi: 3/9 (Khong tinh ham getSize) - Ham getSize error


// Template function to get the size of an unordered_map
template <typename Key, typename T>
int getSize(const std::unordered_map<Key, T>& um) {
    return um.size();
}


int intArgument(std::unordered_map<int, int> um) {
    return getSize(um);
}

int charArgument(std::unordered_map<int, char> um) {
    return getSize(um);
}



int structureArgument(std::unordered_map<int, Class> um) {
    return getSize(um);
}

int oneLevelBasicArgument(std::unordered_map<int, char*> um) {
    return getSize(um);
}

//error
int oneLevelStructureArgument(std::unordered_map<int, Class*> um) {
    return getSize(um);
}


//error
int oneLevelBasic(std::unordered_map<int, char>* um) {
    return getSize(*um);
}



int oneDimBasic(std::unordered_map<int, char> um[]) {
    return getSize(um[0]);
}

//error
int oneLevelStructure(std::unordered_map<int, Class>* um) {
    return getSize(*um);
}


int oneDimStructure(std::unordered_map<int, Class> um[]) {
    return getSize(um[0]);
}
