#include "Board.h"

Board::Board(void) {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 0; ++j) {
            board[0][0] = shared_ptr<Piece>(NULL);
        }
    }

    board[0][0] = shared_ptr<Piece> (new Rook(0,0,'b'));
    board[0][1] = shared_ptr<Piece> (new Knight(0,1,'b'));
    board[0][2] = shared_ptr<Piece> (new Bishop(0,2,'b'));
    board[0][3] = shared_ptr<Piece> (new Queen(0,3,'b'));
    board[0][4] = shared_ptr<Piece> (new King(0,4,'b'));
    board[0][5] = shared_ptr<Piece> (new Bishop(0,5,'b'));
    board[0][6] = shared_ptr<Piece> (new Knight(0,6,'b'));
    board[0][7] = shared_ptr<Piece> (new Rook(0,7,'b'));
    for (int i = 0; i < 8; ++i) {
        board[1][i] = shared_ptr<Piece> (new Pawn(1,i,'b'));
    }

    board[7][0] = shared_ptr<Piece> (new Rook(7,0,'w'));
    board[7][1] = shared_ptr<Piece> (new Knight(7,1,'w'));
    board[7][2] = shared_ptr<Piece> (new Bishop(7,2,'w'));
    board[7][3] = shared_ptr<Piece> (new Queen(7,3,'w'));
    board[7][4] = shared_ptr<Piece> (new King(7,4,'w'));
    board[7][5] = shared_ptr<Piece> (new Bishop(7,5,'w'));
    board[7][6] = shared_ptr<Piece> (new Knight(7,6,'w'));
    board[7][7] = shared_ptr<Piece> (new Rook(7,7,'w'));
    for (int i = 0; i < 8; ++i) {
        board[6][i] = shared_ptr<Piece> (new Pawn(6,i,'w'));
    }
}

Board::~Board() {}

shared_ptr<Piece> Board::getPiece(int rank, int file) const { // File is Columns, Rank is Row
        return board[rank][file];
}

int Board::parseMove(std::string move) {
    char f = toupper(move.at(0));
    char r = move.at(1);

    int file = ((int)(f) - 65);
    int rank = 7 - ((int)(r) - 49);

    int parsed = (10*file) + rank;

    return parsed;
}

std::ostream& operator<<(std::ostream& os, const Board& b) {
    os << "-----------------------------------------" << std::endl;
    for (int i = 0; i < 8; ++i) {
        os << "|";
        for (int j = 0; j < 8; ++j) {
            if (b.getPiece(i,j) != NULL) {
                os << " " << b.getPiece(i,j)->toString() << " |";
            } else {
                os << "    |";
            }
        }
        os << std::endl;
        os << "-----------------------------------------" << std::endl;
    }
    return os;
}

bool Board::makeMove(std::string start, std::string end) {
    return this->makeMove(this->parseMove(start), this->parseMove(end));
}

bool Board::makeMove(int start, int end) {
    std::cout << start << " " << end << std::endl;
    int startFile = start/10;
    int startRank = start%10;
    std::cout << startFile << " " << startRank << std::endl;
    int endFile = end/10;
    int endRank = end%10;
    std::cout << endFile << " " << endRank << std::endl;

    shared_ptr<Piece> startPlace = this->getPiece(startRank, startFile);
    shared_ptr<Piece> endPlace = this->getPiece(endRank, endFile);

    std::cout << startPlace->toString() << std::endl;

    if(startPlace == NULL) return false;
    if(startPlace->move(endRank, endFile)) { // Move Piece
        shared_ptr<Piece> temp{startPlace};
        board[startRank][startFile] = shared_ptr<Piece>(NULL);
        board[endRank][endFile] = temp;
        return true;
    }
    return false;
}