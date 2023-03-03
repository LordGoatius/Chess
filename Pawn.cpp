#include "Pawn.h"

Pawn::Pawn(void) : Piece() {}

Pawn::Pawn(int x, int y, bool color) : Piece(x, y, color) {}

bool Pawn::move(int new_x, int new_y) {
    if (color) {
        if ((new_x == x + 1) && (new_y == y)) {
            return true; // Normal Move
        } else if (new_x == x + 2 && new_y == y && x == 1) {
            return true; // Double from Start
        } else if (new_x == x + 1 && fabs((new_y - y)) == 1) {
            return true; // En Pessant & Capturing
        }
    }
    else {
        if ((new_x == x + 1) && (new_y == y)) {
            return true; // Normal Move
        } else if (new_x == x - 2 && new_y == y && x == 6) {
            return true; // Double from Start
        } else if (new_x == x - 1 && fabs((new_y - y)) == 1) {
            return true; // En Pessant & Capturing
        }
    }
    return false; // Impossible Move
}

string Pawn::toString() const {
        string str = Piece::toString();
        str += " Rook";
        return str;
}

ostream& operator<<(ostream& os, const Pawn& d) {
		os << d.toString();
		return os;
	}