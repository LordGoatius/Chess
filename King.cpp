#include "King.h"

King::King(void) : Piece() {}

King::King(int x, int y, bool color) {
    Piece(x, y, color);
}

bool King::move(int new_x, int new_y) {
    if (fabs(new_x - x) <= 1 && fabs(new_y - y <= 1) && (new_x - x + new_y - y != 0)) {
        return true;
    }
    return false;
}