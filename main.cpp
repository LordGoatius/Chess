#include <iostream>
#include <sstream>

#include "Board.h"


using namespace std;
int main() {
    Board board = Board();

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 8; ++j)
            cout << board.getPiece(i,j)->toString() << endl;
    }

    for (int i = 6; i < 8; ++i) {
        for (int j = 0; j < 8; ++j)
            cout << board.getPiece(i,j)->toString() << endl;
    }
}