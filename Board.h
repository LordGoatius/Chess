#ifndef BOARD_H
#define BOARD_H

#include <string>
#include <array>
#include <memory>
#include <iostream>

#include "Pawn.h"
#include "Rook.h"
#include "Knight.h"
#include "Bishop.h"
#include "King.h"
#include "Queen.h"

using namespace std;
class Board {
private: 
    array< array< shared_ptr<Piece>, 8>, 8> board;
public:
    Board(void);

    virtual ~Board(void);

    //TODO - Fill with more functions :)

    shared_ptr<Piece> getPiece(int, int) const;

    friend std::ostream& operator<<(std::ostream&, const Board&);

    int parseMove(std::string);

    bool makeMove(std::string, std::string);

    bool makeMove(int, int);

};

#endif