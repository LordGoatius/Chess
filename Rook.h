#ifndef ROOK_H
#define ROOK_H

#include "Piece.h"

class Rook : Piece {
private:
    unsigned x; // File
    unsigned y; // Rank
    bool color;
public:
    Rook(void) {};

    Rook(unsigned x, unsigned y, bool color) {};

    bool move(unsigned new_x, unsigned new_y) {};
};

#endif