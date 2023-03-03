#ifndef BISHOP_H
#define BISHOP_H

#include <cmath>
#include "Piece.h"

using namespace std;
class Bishop : public Piece {
public:
    Bishop(void) {};

    Bishop(int x, int y, bool color) {};

    bool move(int new_x, int new_y) {};

    string toString() const {};

    friend ostream& operator<<(ostream& os, const Bishop& d) {};
};

#endif