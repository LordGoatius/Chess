#include "Bishop.h"

Bishop::Bishop(void) : Piece() {}

Bishop::Bishop(int x, int y, bool color) {
    Piece(x, y, color);
}

bool Bishop::move(int new_x, int new_y) {
    if (fabs(new_x - x) == fabs(new_y - y)) {
        return true;
    }
    return false;
}