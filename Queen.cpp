#include "Queen.h"
#include <cmath>

Queen::Queen(void) : Piece() {}

Queen::Queen(int x, int y, bool color) : Piece(x, y, color) {}

Queen::~Queen() {
    //std::cout << "Destroyed" << std::endl;
}

bool Queen::move(int new_x, int new_y) {
    if ((new_x < 8 && new_y == y) || (new_y < 8 && new_x == x) || fabs(new_x - x) == fabs(new_y - y)) {
        return true;
    }
    return false;
}

std::string Queen::toString() const {
        return "Q";
}

std::ostream& operator<<(std::ostream& os, const Queen& d) {
        os << d.toString();
        return os;
    }