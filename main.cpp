#include <iostream>
#include <sstream>
#include <string>

#include "Board.h"

using namespace std;
int main() {
    Board board = Board();

    cout << board.makeMove("g1", "h3") << endl;

    cout << board << endl;
}