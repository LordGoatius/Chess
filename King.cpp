#ifndef KING_H
#define KING_H
#include <cmath>

class King {
private:
    unsigned x; // File
    unsigned y; // Rank
    bool color;
public:
    King(void) : x(0), y(0), color(false) {}

    bool move(unsigned new_x, unsigned new_y) {
        if (fabs(new_x - x) <= 1 && fabs(new_y - y <= 1) && (new_x - x + new_y - y != 0)) {
            return true;
        }
        return false;
    }
};

#endif