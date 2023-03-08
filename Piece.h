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
    char color;
public:
    Piece(void) : x(0), y(0), color(' ') {};

    Piece(int x, int y, char color) {
        this->x = x;
        this->y = y;
        this->color = color;
    }

    virtual ~Piece() {};

    virtual bool move(int new_x, int new_y) = 0;

    int getX() const {
        return this->x;
    }

    int getY() const {
        return this->y;
    }

    bool setX(int x) {
        this->x = x;
        return true;
    }

    bool setY(int y) {
        this->y = y;
        return true;
    }

    bool setXY(int x, int y) {
        this->setX(x);
        this->setY(y);
        return true;
    }

    virtual std::string toString() const {
        std::ostringstream oss;
        oss << x << y << color;
        return oss.str();
    }
};
#endif