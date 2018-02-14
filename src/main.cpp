#include "../include/board.h"

using namespace std;

int main()
{
	char again {'Y'};
	cout << "Select mode:\n 1. Player vs player\n 2. Player vs ai ";
	int mode {};
	cin >> mode;
	while (again == 'Y' || again == 'y')
	{
		string square {"0123456789"};
		char player {'X'};
		int status {-1};
		while (status == -1)
		{
			move(square, player, mode, status);
		}
		//player = player == 'X' ? 'O' : 'X';
		if (status == 1)
			cout << "\nPlayer " << player << " won!\n";
		else
			cout << "\nGame draw!\n";
		cout << "\vPlay again? (Y)es, (N)o/(E)xit? ";
		cin >> again;
	}
	return 0;
}

