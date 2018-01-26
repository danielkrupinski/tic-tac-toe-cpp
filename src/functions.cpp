#include "functions.h"

void draw_board(const string &s)
{
	system("clear");
	cout << "Tic-Tac-Toe\n\v";
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

void move(string &s, char &player)
{
	draw_board(s);
	cout << "\nPlayer " << player << " move: ";
	int choice;
	cin >> choice;

	while (choice < 1 || choice > 9 || s[choice] == 'X' || s[choice] == 'O')
	{
		cout << "Invalid move!";
		cin.ignore();
		getchar();
		system("clear");
		draw_board(s);
		cout << "\nPlayer " << player << " move: ";
		cin >> choice;
	}
	s[choice] = player;
	player = player == 'X' ? 'O' : 'X';
}

