#include "Knight.h"

Knight::Knight(void) : Piece() {}

Knight::Knight(int x, int y, bool color) : Piece(x, y, color) {}

Knight::~Knight() {
    std::cout << "Destroyed" << std::endl;
    }

bool Knight::move(int new_x, int new_y) {
    if ((fabs(new_x - x) == 3 && fabs(new_y - y) == 2) || (fabs(new_x - x) == 2 && fabs(new_y - y) == 3)) {
        return true;
    } else 
        return false;
        
}

std::string Knight::toString() const {
        std::string str = Piece::toString();
        str += " Knight";
        return str;
}

std::ostream& operator<<(std::ostream& os, const Knight& d) {
		os << d.toString();
		return os;
}