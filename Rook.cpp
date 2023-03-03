#include "Rook.h"

Rook::Rook(void) : Piece() {}

Rook::Rook(int x, int y, bool color) : Piece(x, y, color) {}

Rook::~Rook() {
    std::cout << "Destroyed" << std::endl;
}

bool Rook::move(int new_x, int new_y) {
    if ((new_x < 8 && new_y == y) || (new_y < 8 && new_x == x)) {
        return true;
    }
    return false;
}

std::string Rook::toString() const {
        std::string str = Piece::toString();
        str += " Rook";
        return str;
}

std::ostream& operator<<(std::ostream& os, const Rook& d) {
		os << "Rook";//d.toString();
		return os;
	}