#include <iostream>
#include <sstream>

//#include "Board.h"
#include "Rook.h"
#include "Bishop.h"

using namespace std;
int main() {
    Piece* pieces[] = {new Rook(0,0,true), new Bishop(0,0,true)};
    cout << pieces[0]->toString() << " " << pieces[1]->toString() << endl;

    for (int i = 0; i < (sizeof(pieces) / sizeof(Piece*)); ++i) {
        delete pieces[i];
    }
}