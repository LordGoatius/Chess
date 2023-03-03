#ifndef PAWN_H
#define PAWN_H

#include <cmath>
#include "Piece.h"

using namespace std;
class Pawn : public Piece {
public:
    Pawn(void) {};

    Pawn(int x, int y, bool color) {};

    bool move(int new_x, int new_y) {};

    string Pawn::toString() const {}

    friend ostream& operator<<(ostream& os, const Pawn& d) {}
};
#endif