#ifndef BOARD_H
#define BOARD_H

#include <string>
#include "Pawn.h"
#include "Rook.h"
#include "Knight.h"
#include "Bishop.h"
#include "King.h"
#include "Queen.h"

using namespace std;
class Board {
private: 
    Piece* board[8][8];
public:
    Board(void) {};

    //TODO - Fill with more functions :)

};

#endif