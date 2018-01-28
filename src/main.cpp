#include "functions.h"

int main()
{
	char again = 'Y';
	while (again == 'Y' || again == 'y')
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
			cout << "\nPlayer " << player << " won!\n";
		else
			cout << "\nGame draw!\n";
		cout << "\vPlay again? (Y)es, (N)o/(E)xit? ";
		cin >> again;
	}
	return 0;
}

