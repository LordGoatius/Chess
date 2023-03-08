#include "Pawn.h"

Pawn::Pawn(void) : Piece() {}

Pawn::Pawn(int x, int y, char color) : Piece(x, y, color) {}

Pawn::~Pawn() {
    //std::cout << "Destroyed" << std::endl;
}

bool Pawn::move(int new_x, int new_y) {
    if (color == 'b') {
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

std::string Pawn::toString() const {
    std::ostringstream oss;
    oss << color << "P";
    return oss.str();
}

std::ostream& operator<<(std::ostream& os, const Pawn& d) {
    os << d.toString();
    return os;
}