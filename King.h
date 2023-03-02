#ifndef KING_H
#define KING_H

#include <cmath>
#include "Piece.h"

class King : Piece {
private:
    unsigned x; // File
    unsigned y; // Rank
    bool color;
public:
    King(void) {};

    King(unsigned x, unsigned y, bool color) {};

    bool move(unsigned new_x, unsigned new_y) {};
};

#endif