#ifndef BOARD_H
#define BOARD_H

#include <string>
#include <array>
#include <memory>

#include "Pawn.h"
#include "Rook.h"
#include "Knight.h"
#include "Bishop.h"
#include "King.h"
#include "Queen.h"

using namespace std;
class Board {
private: 
    array<array<shared_ptr<Piece>, 8>, 8> board;
public:
    Board(void) {};

    virtual ~Board(void) {};

    //TODO - Fill with more functions :)

    shared_ptr<Piece> getPiece(int rank, int file) {};

};

#endif