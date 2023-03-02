#include "Knight.h"

Knight::Knight(void) : Piece() {}

Knight::Knight(unsigned x, unsigned y, bool color) {
    Piece(x, y, color);
}

bool Knight::move(unsigned new_x, unsigned new_y) {
    if ((fabs(new_x - x) == 3 && fabs(new_y - y) == 2) || (fabs(new_x - x) == 2 && fabs(new_y - y) == 3))
    return false;
}