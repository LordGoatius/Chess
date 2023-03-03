#ifndef QUEEN_H
#define QUEEN_H

#include "Piece.h"

using namespace std;
class Queen : public Piece {
public:
    Queen(void) {};

    Queen(int x, int y, bool color) {};

    bool move(int new_x, int new_y) {};

    string toString() const {};

    friend ostream& operator<<(ostream& os, const Queen& d) {};
};
#endif