#include "Rook.h"

Rook::Rook(void) : Piece() {}

Rook::Rook(int x, int y, bool color) {
    Piece(x, y, color);
}

bool Rook::move(int new_x, int new_y) {
    if ((new_x < 8 && new_y == y) || (new_y < 8 && new_x == x)) {
        return true;
    }
    return false;
}