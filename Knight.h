#ifndef KNIGHT_H
#define KNGIHT_H

#include <cmath>
#include <iostream>
#include "Piece.h"

class Knight : public Piece {
public:
    Knight(void);

    Knight(int, int, bool);

    ~Knight();

    bool move(int , int );

    std::string toString() const ;

    friend std::ostream& operator<<(std::ostream& os, const Knight& d);
};
#endif