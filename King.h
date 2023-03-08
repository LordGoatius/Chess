#ifndef KING_H
#define KING_H

#include <cmath>
#include <iostream>
#include "Piece.h"

class King : public Piece {
public:
    King(void);

    King(int, int, char);

    ~King();

    bool move(int, int);

    std::string toString() const ;

    friend std::ostream& operator<<(std::ostream& os, const King& d);
};

#endif