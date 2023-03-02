#ifndef PAWN_H
#define PAWN_H
#include <Piece.h>
#include <cmath>

class Pawn : Piece {
private:
    unsigned x; // File
    unsigned y; // Rank
    bool color;
public:
    Pawn(void) : Piece() {}

    Pawn(unsigned x, unsigned y, bool color) {
        Piece(x, y, color);
    }

    bool move(unsigned new_x, unsigned new_y) {
        if (color) {
            if ((new_x == x + 1) && (new_y == y)) {
                return true; // Normal Move
            } else if (new_x == x + 2 && new_y == y && x == 1) {
                return true; // Double from Start
            } else if (new_x == x + 1 && fabs((new_y - y)) == 1) {
                return true; // En Pessant & Capturing
            }
        }
        else {
            if ((new_x == x + 1) && (new_y == y)) {
                return true; // Normal Move
            } else if (new_x == x - 2 && new_y == y && x == 6) {
                return true; // Double from Start
            } else if (new_x == x - 1 && fabs((new_y - y)) == 1) {
                return true; // En Pessant & Capturing
            }
        }
        return false; // Impossible Move
    }
};
#endif