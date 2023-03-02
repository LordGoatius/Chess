#ifndef KNIGHT_H
#define KNGIHT_H
#include <cmath>

class Queen {
private:
    unsigned x; // File
    unsigned y; // Rank
    bool color;
public:
    Queen(void) : x(0), y(0), color(false) {}

    bool move(unsigned new_x, unsigned new_y) {
        if ((fabs(new_x - x) == 3 && fabs(new_y - y) == 2) || (fabs(new_x - x) == 2 && fabs(new_y - y) == 3))
        return false;
    }
};
#endif