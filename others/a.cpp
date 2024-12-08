// a.cpp
#include <bitset>
#include <unordered_set>

class Point {
public:
    int x, y;
    Point(int x, int y) : x(x), y(y) {}

    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
};

namespace std {
    template <>
    struct hash<Point> {
        size_t operator()(const Point& p) const {
            return p.x + p.y;  
        }
    };
}

int check(std::unordered_set<Point> us, std::bitset<3> bs) {
    Point first_element = *us.begin();
    if (us.size() > 1) {
        return 1;
    }
     if (bs[0] == true) {
        return 1;
    }
    return 0;
}

