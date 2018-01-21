#include <iostream>
#include "game.h"
#include "game.cpp"

using namespace std;

int main()
{
	Game game;
	while(game.status == GameStatus::in_progress)
	{
		game.Draw();		
		game.Move();
	}
	game.Draw();
	if(game.status == GameStatus::win)

		cout<<"==>\aPlayer "<< game.player-1 <<" win ";
	else
		cout<<"==>\aGame draw";

	cin.ignore();
	getchar();
	return 0;
}
