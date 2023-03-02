#include "Queen.h"

Queen::Queen(void) : Piece() {}

Queen::Queen(unsigned x, unsigned y, bool color) {
    Piece(x, y, color);
}

bool Queen::move(unsigned new_x, unsigned new_y) {
    if ((new_x < 8 && new_y == y) || (new_y < 8 && new_x == x) || fabs(new_x - x) == fabs(new_y - y)) {
        return true;
    }
    return false;
}