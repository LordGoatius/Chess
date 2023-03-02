#ifndef PIECE_H
#define PIECE_H
#include <cmath>

class Piece {
private:
    unsigned x; // File
    unsigned y; // Rank
    bool color;
public:
    Piece(void) : x(0), y(0), color(false) {}

    Piece(unsigned x, unsigned y, bool color) {
        this->x = x;
        this->y = y;
        this->color = color;
    }

    virtual bool move(unsigned new_x, unsigned new_y) {}
};
#endif