#ifndef QUEEN_H
#define QUEEN_H

#include <cmath>
#include "Piece.h"

class Queen : Piece {
private:
    int x; // File
    int y; // Rank
    bool color;
public:
    Queen(void) {};

    Queen(int x, int y, bool color) {};

    bool move(int new_x, int new_y) {};
};
#endif