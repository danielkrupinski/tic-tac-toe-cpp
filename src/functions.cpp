#include "../include/functions.h"

using namespace std;

void draw_board(const string& s)
{
	system("clear");
	cout << "Tic-Tac-Toe\n\v";
	for(int i = 1; i != 10; ++i)
	{
		cout << ' ' << s[i] << ' ';
		if(i % 3)
		cout << '|';
		else if(i != 9)
		cout << "\n---+---+---\n";
		else cout << endl;
	}
}

void move(string& s, char& player)
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
		draw_board(s);
		cout << "\nPlayer " << player << " move: ";
		cin >> choice;
	}
	s[choice] = player;
	player = player == 'X' ? 'O' : 'X';
}

int check(const string& s)
{
	const int ways[8][3] {{1,2,3},{4,5,6},{7,8,9},
                   	      {1,4,7},{2,5,8},{3,6,9},
                   	      {1,5,9},{3,5,7}};
	for (int i = 0; i != 8; ++i)
		if (s[ways[i][0]] == s[ways[i][1]] && s[ways[i][1]] == s[ways[i][2]])
			return 1;	
	int count = 0;
	for (int i = 1; i != 10; ++i)
		if (s[i] != 48+i)
			++count;
	if (count == 9)
		return 0;
	return -1;
}

