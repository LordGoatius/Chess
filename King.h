#ifndef KING_H
#define KING_H

#include <cmath>
#include "Piece.h"

using namespace std;

class King : public Piece {
public:
    King(void) {};

    King(int x, int y, bool color) {};

    bool move(int new_x, int new_y) {};

    string King::toString() const {}

    friend ostream& operator<<(ostream& os, const King& d) {}
};

#endif