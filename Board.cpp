#include "Board.h"

Board::Board(void) {
    // Fill with NULL pointers
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            board[i][j] == NULL;
        }
    }

    board[0][0] = new Rook(0,0,true);
}

Board::getPiece(int rank, file) { // Rank is columns, file is row (x, y)
        return board[file][rank];
}