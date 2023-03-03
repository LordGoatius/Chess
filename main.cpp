#include <iostream>

#include "Board.h"

int main() {
    Board b;
    Piece* piece = b.getPiece(8,8);
    cout << piece->toString() << endl;
}