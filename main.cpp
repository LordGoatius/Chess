#include <iostream>
#include <sstream>

//#include "Board.h"
#include "Rook.h"
#include "Bishop.h"
#include "King.h"
#include "Knight.h"
#include "Pawn.h"

using namespace std;
int main() {
    Piece* pieces[] = {new Rook(0,0,true), new Bishop(0,0,true), new King(0,0,true), new Knight(0,0,true), new Pawn(0,0,true)};

    for (int i = 0; i < (sizeof(pieces) / sizeof(Piece*)); ++i) {
        cout << pieces[i]->toString() << " ";
    }
    cout << endl;

    for (int i = 0; i < (sizeof(pieces) / sizeof(Piece*)); ++i) {
        delete pieces[i];
    }
}