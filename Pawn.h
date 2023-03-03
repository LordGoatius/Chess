#ifndef PAWN_H
#define PAWN_H

#include <cmath>
#include <iostream>
#include "Piece.h"

class Pawn : public Piece {
public:
    Pawn(void);

    Pawn(int, int, bool );

    ~Pawn();

    bool move(int , int );

    std::string toString() const ;

    friend std::ostream& operator<<(std::ostream& os, const Pawn& d);
};
#endif