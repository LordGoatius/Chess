#include "Queen.h"
#include <cmath>

Queen::Queen(void) : Piece() {}

Queen::Queen(int x, int y, bool color) : Piece(x, y, color) {
}

bool Queen::move(int new_x, int new_y) {
    if ((new_x < 8 && new_y == y) || (new_y < 8 && new_x == x) || fabs(new_x - x) == fabs(new_y - y)) {
        return true;
    }
    return false;
}

string Queen::toString() const {
        string str = Piece::toString();
        str += " Queen";
        return str;
}

ostream& operator<<(ostream& os, const Queen& d) {
		os << d.toString();
		return os;
	}