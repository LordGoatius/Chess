#ifndef PIECE_H
#define PIECE_H
#include <cmath>
#include <string>

class Piece {
protected:
    int x; // File
    int y; // Rank
    bool color;
public:
    Piece(void) : x(0), y(0), color(false) {}

    Piece(int x, int y, bool color) {
        this->x = x;
        this->y = y;
        this->color = color;
    }

    virtual bool move(int new_x, int new_y) {}

    virtual string toString() const {
        string str = "";
        str += x;
        str += " ";
        str += y;
        if (color) {
            str += " White";
        } else {
            str += " Black";
        }
        return str;
    }
};
#endif