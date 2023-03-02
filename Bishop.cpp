#include "Bishop.h"

Bishop::Bishop(void) : Piece() {}

Bishop::Bishop(unsigned x, unsigned y, bool color) {
    Piece(x, y, color);
}

bool Bishop::move(unsigned new_x, unsigned new_y) {
    if (fabs(new_x - x) == fabs(new_y - y)) {
        return true;
    }
    return false;
}