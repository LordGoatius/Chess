#ifndef ROOK_H
#define ROOK_H

class Rook {
private:
    unsigned x; // File
    unsigned y; // Rank
    bool color;
public:
    Rook(void) : x(0), y(0), color(false) {}
};

#endif