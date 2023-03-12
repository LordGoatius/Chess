#ifndef QUEEN_H
#define QUEEN_H

#include "Piece.h"
#include <string>
#include <iostream>

class Queen : public Piece {
public:
    Queen(void);

    Queen(int , int , char);

    ~Queen();

    bool move(int , int);

    std::string toString() const ;

    std::string toStringCase() const ;

    friend std::ostream& operator<<(std::ostream& os, const Queen& d);
};
#endif