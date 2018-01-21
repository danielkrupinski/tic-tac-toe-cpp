#include <iostream>
#include "game.h"
#include "game.cpp"

using namespace std;

int main()
{
	Game game;
	while(game.game_status == -1)
	{
		game.Draw();		
		game.Move();
	}
	game.Draw();
	if(game.game_status ==1)

		cout<<"==>\aPlayer "<< game.GetPlayer()-1 <<" win ";
	else
		cout<<"==>\aGame draw";

	cin.ignore();
	getchar();
	return 0;
}
