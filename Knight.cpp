#include "Knight.h"

Knight::Knight(void) : Piece() {}

Knight::Knight(int x, int y, char color) : Piece(x, y, color) {}

Knight::~Knight() {
    //std::cout << "Destroyed" << std::endl;
}

bool Knight::move(int new_x, int new_y) {
    std::cout << new_x << " " << new_y << std::endl;
    std::cout << this->x << " " << this->y << std::endl;
    if ((fabs(new_x - x) == 2 && fabs(new_y - y) == 1) || (fabs(new_x - x) == 1 && fabs(new_y - y) == 2)) {
        return true;
    } else 
        return false;
        
}

std::string Knight::toString() const {
    std::ostringstream oss;
    oss << color << "X";
    return oss.str();
}

std::string Knight::toStringCase() const {
    if (color == 'w') return "N";
    return "n";
}

std::ostream& operator<<(std::ostream& os, const Knight& d) {
	os << d.toString();
	return os;
}