#include <queue> // for std::priority_queue
#include <string>
#include "../class.h"

//Loi: 3/11

// Function to get the size of a priority_queue
template <typename T>
int getSize(const std::priority_queue<T>& pq) {
    return pq.size();
}

// Basic argument types with std::priority_queue
int intArgument(std::priority_queue<int> pq) {
    return getSize(pq);
}

int charArgument(std::priority_queue<char> pq) {
    return getSize(pq);
}


int structureArgument(std::priority_queue<Class> pq) {
    return getSize(pq);
}


// Priority queues with pointers
int oneLevelBasicArgument(std::priority_queue<char*> pq) {
    return getSize(pq);
}

//error
int oneLevelStructureArgument(std::priority_queue<Class*> pq) {
    return getSize(pq);
}

//error
// Single-level pointer to priority_queue
int oneLevelBasic(std::priority_queue<char>* pq) {
    return getSize(*pq);
}

// One-dimensional array of priority_queue
int oneDimBasic(std::priority_queue<char> pq[]) {
    return getSize(pq[0]);
}

//error
// Single-level pointer with user-defined Class in priority_queue
int oneLevelStructure(std::priority_queue<Class>* pq) {
    return getSize(*pq);
}

int oneDimStructure(std::priority_queue<Class> pq[]) {
    return getSize(pq[0]);
}

// Priority queue containing int pointers with array of priority_queue
int twoDimOneLevel(std::priority_queue<int*> pq[4]) {
    return getSize(pq[0]);
}
