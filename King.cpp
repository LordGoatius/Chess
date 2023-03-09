#include "King.h"

King::King(void) : Piece() {}

King::King(int x, int y, char color) : Piece(x, y, color) {}

King::~King() {
    //std::cout << "Destroyed" << std::endl;
}

bool King::move(int new_x, int new_y) {
    if (fabs(new_x - x) <= 1 && fabs(new_y - y <= 1) && (new_x - x + new_y - y != 0)) {
        return true;
    }
    return false;
}

std::string King::toString() const {
    std::ostringstream oss;
    oss << color << "K";
    return oss.str();
}

std::string King::toStringCase() const {
    if (color == 'w') return "K";
    return "k";
}

std::ostream& operator<<(std::ostream& os, const King& d) {
	os << d.toString();
	return os;
}