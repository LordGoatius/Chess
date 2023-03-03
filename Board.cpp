#include "Board.h"
#include "Rook.h"

Board::Board(void) {
    board[0][0] = shared_ptr<Rook> (new Rook(0,0,false));
    board[0][1] = shared_ptr<Knight> (new Knight(0,1,false));
    board[0][2] = shared_ptr<Bishop> (new Bishop(0,2,false));
    board[0][3] = shared_ptr<Queen> (new Queen(0,3,false));
    board[0][4] = shared_ptr<King> (new King(0,4,false));
    board[0][5] = shared_ptr<Bishop> (new Bishop(0,5,false));
    board[0][6] = shared_ptr<Knight> (new Knight(0,6,false));
    board[0][7] = shared_ptr<Rook> (new Rook(0,7,false));
    for (int i = 0; i < 8; ++i) {
        board[1][i] = shared_ptr<Pawn> (new Pawn(1,i,false));
    }

    board[7][0] = shared_ptr<Rook> (new Rook(7,0,true));
    board[7][1] = shared_ptr<Knight> (new Knight(7,1,true));
    board[7][2] = shared_ptr<Bishop> (new Bishop(7,2,true));
    board[7][3] = shared_ptr<Queen> (new Queen(7,3,true));
    board[7][4] = shared_ptr<King> (new King(7,4,true));
    board[7][5] = shared_ptr<Bishop> (new Bishop(7,5,true));
    board[7][6] = shared_ptr<Knight> (new Knight(7,6,true));
    board[7][7] = shared_ptr<Rook> (new Rook(7,7,true));
    for (int i = 0; i < 8; ++i) {
        board[6][i] = shared_ptr<Pawn> (new Pawn(6,i,true));
    }
}

shared_ptr<Piece> Board::getPiece(int file, int rank) { // Rank is columns, file is row (x, y)
        return board[file][rank];
}