#include "Bishop.h"

Bishop::Bishop(void) : Piece() {}

Bishop::Bishop(int x, int y, bool color) : Piece(x,y,color) {}

bool Bishop::move(int new_x, int new_y) {
    if (fabs(new_x - x) == fabs(new_y - y)) {
        return true;
    }
    return false;
}

string Bishop::toString() const {
        string str = Piece::toString();
        str += " Bishop";
        return str;
}

ostream& operator<<(ostream& os, const Bishop& d) {
		os << d.toString();
		return os;
	}