#ifndef BOARD_H
#define BOARD_H
#include <string>
#include "Piece.h"

using namespace std;
class Board {
private: 
    Piece board[8][8];
public:
    Board(void) {
        board[0][0] == Rook;
    }

};

#endif