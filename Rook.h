#ifndef ROOK_H
#define ROOK_H

#include "Piece.h"

class Rook : Piece {
private:
    int x; // File
    int y; // Rank
    bool color;
public:
    Rook(void) {};

    Rook(int x, int y, bool color) {};

    virtual bool move(int new_x, int new_y) {};

    virtual string toString() {}
};

#endif