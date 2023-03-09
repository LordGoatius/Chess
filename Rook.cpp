#include "Rook.h"

Rook::Rook(void) : Piece() {}

Rook::Rook(int x, int y, char color) : Piece(x, y, color) {}

Rook::~Rook() {
    //std::cout << "Destroyed" << std::endl;
}

bool Rook::move(int new_x, int new_y) {
    if ((new_x < 8 && new_y == y) || (new_y < 8 && new_x == x)) {
        return true;
    }
    return false;
}

std::string Rook::toString() const {
    std::ostringstream oss;
    oss << color << "R";
    return oss.str();
}

std::string Rook::toStringCase() const {
    if (color == 'w') return "R";
    return "r";
}

std::ostream& operator<<(std::ostream& os, const Rook& d) {
    os << d.toString();
    return os;
}