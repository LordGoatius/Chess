#ifndef KNIGHT_H
#define KNGIHT_H

#include <cmath>
#include "Piece.h"

class Knight : Piece {
private:
    int x; // File
    int y; // Rank
    bool color;
public:
    Knight(void) {}

    Knight(int x, int y, bool color) {}

    bool move(int new_x, int new_y) {}
};
#endif