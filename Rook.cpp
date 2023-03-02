#include "Rook.h"

Rook::Rook(void) : Piece() {}

Rook::Rook(unsigned x, unsigned y, bool color) {
    Piece(x, y, color);
}

bool Rook::move(unsigned new_x, unsigned new_y) {
    if ((new_x < 8 && new_y == y) || (new_y < 8 && new_x == x)) {
        return true;
    }
    return false;
}