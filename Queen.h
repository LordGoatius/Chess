#ifndef QUEEN_H
#define QUEEN_H

#include <cmath>
#include "Piece.h"

class Queen : Piece {
private:
    unsigned x; // File
    unsigned y; // Rank
    bool color;
public:
    Queen(void) {};

    Queen(unsigned x, unsigned y, bool color) {};

    bool move(unsigned new_x, unsigned new_y) {};
};
#endif