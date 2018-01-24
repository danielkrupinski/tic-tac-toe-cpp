#include <iostream>
#include "player.h"
#include "board.h"

using namespace std;

int main()
{
	cout << "Tic-tac-toe" << endl;
	board Board;
	Board.draw();
	getchar();
	return 0;
}

