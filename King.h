#ifndef KING_H
#define KING_H

#include <cmath>
#include "Piece.h"

class King : Piece {
private:
    int x; // File
    int y; // Rank
    bool color;
public:
    King(void) {};

    King(int x, int y, bool color) {};

    bool move(int new_x, int new_y) {};
};

#endif