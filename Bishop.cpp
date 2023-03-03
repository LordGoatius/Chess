#include "Bishop.h"

Bishop::Bishop(void) : Piece() {}

Bishop::Bishop(int x, int y, bool color) : Piece(x,y,color) {}

Bishop::~Bishop() {
    std::cout << "Destroyed" << std::endl;

}

bool Bishop::move(int new_x, int new_y) {
    if (fabs(new_x - x) == fabs(new_y - y)) {
        return true;
    }
    return false;
}

std::string Bishop::toString() const {
        std::string str = Piece::toString();
        str += " Bishop";
        return str;
}

std::ostream& operator<<(std::ostream& os, const Bishop& d) {
		os << d.toString();
		return os;
	}