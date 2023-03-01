#ifndef ROOK_H
#define ROOK_H

class Rook {
private:
    unsigned x; // File
    unsigned y; // Rank
    bool color;
public:
    Rook(void) : x(0), y(0), color(false) {}

    bool move(unsigned new_x, unsigned new_y) {
        if ((new_x < 8 && new_y == y) || (new_y < 8 && new_x == x)) {
            return true;
        }
        return false;
    }
};

#endif