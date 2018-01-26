#include "board.h"

board::board()
{

}

void board::draw()
{
	system("clear");
	cout << "Tic-Tac-Toe\n\v";
	cout << "Player 1 (X) - Player 2 (O)\n\v";
  	for(int i = 1; i != 10; ++i)
  	{
    		cout << ' ' << square[i] << ' ';
    		if(i % 3)
     		cout << '|';
    		else if(i != 9)
     		cout << "\n---+---+---\n";
    		else cout << endl;
	}
}

int board::check()
{

}

char board::get_square(int a)
{
	return square[a];
}
void board::set_square(int choice, char sign)
{
	square[choice] = sign;
}


