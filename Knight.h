#ifndef KNIGHT_H
#define KNGIHT_H

#include <cmath>
#include "Piece.h"

class Knight : Piece {
private:
    unsigned x; // File
    unsigned y; // Rank
    bool color;
public:
    Knight(void) {}

    Knight(unsigned x, unsigned y, bool color) {}

    bool move(unsigned new_x, unsigned new_y) {}
};
#endif