#include <iostream>
#include <sstream>
#include <string>

#include "Board.h"

using namespace std;
int main() {
    Board board = Board();

    cout << board << endl;

    cout << board.makeMove("e2", "e5") << endl;

    cout << board << endl;
}