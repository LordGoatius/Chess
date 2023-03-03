#ifndef BISHOP_H
#define BISHOP_H

#include <cmath>
#include "Piece.h"

class Bishop : Piece {
private:
    int x; // File
    int y; // Rank
    bool color;
public:
    Bishop(void) {};

    Bishop(int x, int y, bool color) {};

    bool move(int new_x, int new_y) {};
};

#endif