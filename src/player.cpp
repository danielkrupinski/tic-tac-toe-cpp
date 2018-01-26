#include "player.h"

player::player()
{

}

int player::player_id()
{
	return id;
}

int player::player_id(int a)
{
	id = a;
}

char player::player_sign()
{
	return sign;
}

char player::player_sign(char a)
{
	sign = a;
}

void player::move(board &Board)
{
	cout << "Player " << id << " moves: ";
	int choice;
	cin >> choice;
	if (Board.get_square(choice)!='X' && Board.get_square(choice)!='O' && choice < 10 && choice > 0)
		Board.set_square(choice, sign);
	else
	{	cout << "Invalid move!";
		cin.ignore();
		getchar();
		system("clear");
		Board.draw();
		move(Board);
	}	
}

