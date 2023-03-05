#include <iostream>
#include <sstream>
#include <string>

#include "Board.h"

using namespace std;
int main() {
    Board board = Board();

    cout << board << endl;

    board.makeMove("g1", "f3");

    cout << board << endl;
}