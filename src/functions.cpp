#include "functions.h"

void draw_board(const string &s)
{
	cout << "Tic-Tac-Toe\n\v";
	system("clear");
	for(int i = 1; i != 10; i++)
	{
		cout << " " << s[i] << " ";
		if(i % 3)
		cout << "|";
		else if(i != 9)
		cout << "\n---+---+---\n";
		else cout << endl;
	}
}

