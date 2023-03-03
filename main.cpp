#include <iostream>
#include <sstream>

//#include "Board.h"
#include "Rook.h"

using namespace std;
int main() {
    Piece* rook = new Rook(0,0,true);
    delete rook;
}