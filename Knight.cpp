#include "Knight.h"

Knight::Knight(void) : Piece() {}

Knight::Knight(int x, int y, bool color) : Piece(x, y, color) {}

bool Knight::move(int new_x, int new_y) {
    if ((fabs(new_x - x) == 3 && fabs(new_y - y) == 2) || (fabs(new_x - x) == 2 && fabs(new_y - y) == 3))
    return false;
}

string Knight::toString() const {
        string str = Piece::toString();
        str += " knight";
        return str;
}

ostream& operator<<(ostream& os, const Knight& d) {
		os << d.toString();
		return os;
	}