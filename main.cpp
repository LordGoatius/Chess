#include <iostream>
#include <sstream>

#include "Board.h"

using namespace std;
int main() {
    Board board = Board();

    cout << board.parseMove("b3");
}