#include "Bishop.h"

Bishop::Bishop(void) : Piece() {}

Bishop::Bishop(int x, int y, char color) : Piece(x,y,color) {}

Bishop::~Bishop() {
    //std::cout << "Destroyed" << std::endl;
}

bool Bishop::move(int new_x, int new_y) {
    if (fabs(new_x - x) == fabs(new_y - y)) {
        return true;
    }
    return false;
}

std::string Bishop::toString() const {
    std::ostringstream oss;
    oss << color << "B";
    return oss.str();
}

std::ostream& operator<<(std::ostream& os, const Bishop& d) {
		os << d.toString();
		return os;
	}