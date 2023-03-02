#ifndef BISHOP_H
#define BISHOP_H

#include <cmath>
#include "Piece.h"

class Bishop : Piece {
private:
    unsigned x; // File
    unsigned y; // Rank
    bool color;
public:
    Bishop(void) {};

    Bishop(unsigned x, unsigned y, bool color) {};

    bool move(unsigned new_x, unsigned new_y) {};
};

#endif