#ifndef KNIGHT_H
#define KNGIHT_H

#include <cmath>
#include "Piece.h"

using namespace std;
class Knight : public Piece {
public:
    Knight(void) {}

    Knight(int x, int y, bool color) {}

    bool move(int new_x, int new_y) {}

    string Knight::toString() const {}

    friend ostream& operator<<(ostream& os, const Knight& d) {}
};
#endif