#ifndef KNIGHT_H
#define KNGIHT_H

#include <cmath>
#include <Piece.h>


class Knight : Piece {
private:
    unsigned x; // File
    unsigned y; // Rank
    bool color;
public:
    Knight(void) : Piece() {}

    Knight(unsigned x, unsigned y, bool color) {
        Piece(x, y, color);
    }

    bool move(unsigned new_x, unsigned new_y) {
        if ((fabs(new_x - x) == 3 && fabs(new_y - y) == 2) || (fabs(new_x - x) == 2 && fabs(new_y - y) == 3))
        return false;
    }
};
#endif