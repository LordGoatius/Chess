#ifndef PAWN_H
#define PAWN_H

#include <cmath>
#include "Piece.h"

class Pawn : Piece {
private:
    int x; // File
    int y; // Rank
    bool color;
public:
    Pawn(void) {};

    Pawn(int x, int y, bool color) {};

    bool move(int new_x, int new_y) {};
};
#endif