#ifndef QUEEN_H
#define QUEEN_H
#include "Bishop.cpp"
#include "Rook.cpp"

class Queen {
private:
    unsigned x; // File
    unsigned y; // Rank
    bool color;
public:
    Queen(void) : x(0), y(0), color(false) {}

    bool move(unsigned new_x, unsigned new_y) {
        if ((new_x < 8 && new_y == y) || (new_y < 8 && new_x == x) || fabs(new_x - x) == fabs(new_y - y)) {
            return true;
        }
        return false;
    }
};

#endif