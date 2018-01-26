#include <iostream>
#include "player.h"
#include "board.h"

using namespace std;


	

int main()
{
	board Board;
	player Player1;
	Player1.player_id(1);
	Player1.player_sign('X');
	player Player2;
	Player2.player_id(2);
	Player2.player_sign('O');
	
	while(true)
	{
		Board.draw();
		Player1.move(Board);
		if (Board.check() == 1)
		{
			Board.draw();
			cout << "Player 1 win!";
			cin.ignore();
			getchar();
			return 0;
		}
		Board.draw();		
		Player2.move(Board);
		if (Board.check() == 1)
		{
			Board.draw();
			cout << "Player 2 win!";
			cin.ignore();
			getchar();
			return 0;
		}
			
		
	}
	Board.draw();
	getchar();
	return 0;
}

