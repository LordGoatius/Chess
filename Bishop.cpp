#ifndef BISHOP_H
#define BISHOP_H
#include <cmath>

class Bishop {
private:
    unsigned x; // File
    unsigned y; // Rank
    bool color;
public:
    Bishop(void) : x(0), y(0), color(false) {}

    bool move(unsigned new_x, unsigned new_y) {
        if (fabs(new_x - x) == fabs(new_y - y)) {
            return true;
        }
        return false;
    }
};

#endif