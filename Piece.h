#ifndef PIECE_H
#define PIECE_H
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>

class Piece {
protected:
    int x; // File
    int y; // Rank
    bool color;
public:
    Piece(void) : x(0), y(0), color(false) {};

    Piece(int x, int y, bool color) {
        this->x = x;
        this->y = y;
        this->color = color;
    }

    virtual ~Piece() {};

    virtual bool move(int new_x, int new_y) = 0;

    virtual std::string toString() const {
        std::ostringstream oss;
        oss << x << y << color;
        return oss.str();
    }
};
#endif