#include "King.h"

King::King(void) : Piece() {}

King::King(unsigned x, unsigned y, bool color) {
    Piece(x, y, color);
}

bool King::move(unsigned new_x, unsigned new_y) {
    if (fabs(new_x - x) <= 1 && fabs(new_y - y <= 1) && (new_x - x + new_y - y != 0)) {
        return true;
    }
    return false;
}