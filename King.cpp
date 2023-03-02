#ifndef KING_H
#define KING_H

#include <Piece.h>
#include <cmath>

class King : Piece {
private:
    unsigned x; // File
    unsigned y; // Rank
    bool color;
public:
    King(void) : Piece() {}

    King(unsigned x, unsigned y, bool color) {
        Piece(x, y, color);
    }

    bool move(unsigned new_x, unsigned new_y) {
        if (fabs(new_x - x) <= 1 && fabs(new_y - y <= 1) && (new_x - x + new_y - y != 0)) {
            return true;
        }
        return false;
    }
};

#endif