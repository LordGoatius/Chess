#ifndef ROOK_H
#define ROOK_H

#include "Piece.h"
#include <iostream>
#include <string>

class Rook : public Piece {
public:
    Rook(void);

    Rook(int, int, bool);

    ~Rook();

    bool move(int, int);

    std::string toString() const ;

    friend std::ostream& operator<<(std::ostream&, const Rook&);
};

#endif