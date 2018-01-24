#include "board.h"
#include <iostream>

using namespace std;

board::board()
{

}

void board::draw()
{
	cout << "----------------" << endl;
	cout << "| " << square[0] << " | " << square[1] << " | " << square[2] << " |" << endl;
	cout << "----------------" << endl;
}

int board::check()
{

}

