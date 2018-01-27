#include "functions.h"

int main()
{
	string square = "0123456789";
	char player = 'X';
	int status = -1;
	while (status == -1)
	{
		move(square, player);
		status = check(square);
	}
	player = player == 'X' ? 'O' : 'X';
	draw_board(square);
	if (status == 1)
		cout << "\nPlayer " << player << " won!";
	else
		cout << "\nGame draw!";
	cin.ignore();
	getchar();
	return 0;
}

