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
	if (square[1] == 'X' && square[2] == 'X' && square[3] == 'X')
		return 1;
	if (square[4] == 'X' && square[5] == 'X' && square[6] == 'X')
		return 1;
	if (square[7] == 'X' && square[8] == 'X' && square[9] == 'X')
		return 1;
	if (square[1] == 'O' && square[2] == 'O' && square[3] == 'O')
		return 1;
	if (square[4] == 'O' && square[5] == 'O' && square[6] == 'O')
		return 1;
	if (square[7] == 'O' && square[8] == 'O' && square[9] == 'O')
		return 1;
	if (square[1] == 'X' && square[4] == 'X' && square[7] == 'X')
		return 1;
	if (square[2] == 'X' && square[5] == 'X' && square[8] == 'X')
		return 1;
	if (square[3] == 'X' && square[6] == 'X' && square[9] == 'X')
		return 1;
	if (square[1] == 'O' && square[4] == 'O' && square[7] == 'O')
		return 1;
	if (square[2] == 'O' && square[5] == 'O' && square[8] == 'O')
		return 1;
	if (square[3] == 'O' && square[6] == 'O' && square[9] == 'O')
		return 1;
	if (square[1] == 'X' && square[5] == 'X' && square[9] == 'X')
		return 1;
	if (square[3] == 'X' && square[5] == 'X' && square[7] == 'X')
		return 1;
	if (square[1] == 'O' && square[5] == 'O' && square[9] == 'O')
		return 1;
	if (square[3] == 'O' && square[5] == 'O' && square[7] == 'O')
		return 1;
	else return -1;
}

char board::get_square(int a)
{
	return square[a];
}
void board::set_square(int choice, char sign)
{
	square[choice] = sign;
}


