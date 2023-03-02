#ifndef QUEEN_H
#define QUEEN_H

#include <cmath>
#include <Piece.h>


class Queen : Piece {
private:
    unsigned x; // File
    unsigned y; // Rank
    bool color;
public:
    Queen(void) : x(0), y(0), color(false) {}

    Queen(unsigned x, unsigned y, bool color) {
        Piece(x, y, color);
    }

    bool move(unsigned new_x, unsigned new_y) {
        if ((new_x < 8 && new_y == y) || (new_y < 8 && new_x == x) || fabs(new_x - x) == fabs(new_y - y)) {
            return true;
        }
        return false;
    }
};
#endif