#ifndef BISHOP_H
#define BISHOP_H

#include <Piece.h>
#include <cmath>

class Bishop : Piece {
private:
    unsigned x; // File
    unsigned y; // Rank
    bool color;
public:
    Bishop(void) : Piece() {}

    Bishop(unsigned x, unsigned y, bool color) {
        Piece(x, y, color);
    }

    bool move(unsigned new_x, unsigned new_y) {
        if (fabs(new_x - x) == fabs(new_y - y)) {
            return true;
        }
        return false;
    }
};

#endif