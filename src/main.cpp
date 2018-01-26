#include <iostream>
#include "player.h"
#include "board.h"

using namespace std;

void setup()
{
	board Board;
	player Player1;
	Player1.player_id(1);
	Player1.player_sign('X');
	player Player2;
	Player2.player_id(2);
	Player2.player_sign('O');

}
int main()
{
	setup();
	while(true)
	{
		Board.draw();
		Player1.move(Board);
		Board.check();
		Board.draw();		
		Player2.move(Board);
		Board.check();
	}
	Board.draw();
	getchar();
	return 0;
}

