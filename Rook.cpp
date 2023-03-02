#ifndef ROOK_H
#define ROOK_H
#include <Piece.h>

class Rook : Piece {
private:
    unsigned x; // File
    unsigned y; // Rank
    bool color;
public:
    Rook(void) : Piece() {}

    Rook(unsigned x, unsigned y, bool color) {
        Piece(x, y, color);
    }

    bool move(unsigned new_x, unsigned new_y) {
        if ((new_x < 8 && new_y == y) || (new_y < 8 && new_x == x)) {
            return true;
        }
        return false;
    }
};

#endif