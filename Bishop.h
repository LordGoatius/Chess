#ifndef BISHOP_H
#define BISHOP_H

#include <cmath>
#include <string>
#include <iostream>
#include <ostream>
#include "Piece.h"

class Bishop : public Piece {
public:
    Bishop(void);

    Bishop(int, int, char);

    ~Bishop();

    bool move(int, int);

    std::string toString() const ;

    friend std::ostream& operator<<(std::ostream& os, const Bishop& d);
};

#endif