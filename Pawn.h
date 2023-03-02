#ifndef PAWN_H
#define PAWN_H

#include <cmath>
#include "Piece.h"

class Pawn : Piece {
private:
    unsigned x; // File
    unsigned y; // Rank
    bool color;
public:
    Pawn(void) {};

    Pawn(unsigned x, unsigned y, bool color) {};

    bool move(unsigned new_x, unsigned new_y) {};
};
#endif