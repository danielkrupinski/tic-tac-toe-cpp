#include <iostream>
#include "game.h"
#include "game.cpp"

using namespace std;

int main()
{
	Game game;
	int gowno = 1;
	while(game.GetI() == -1)
	{
		game.Draw();
		game.Init();		
		game.Move();
	}
	game.Draw();
	if(game.GetI()==1)

		cout<<"==>\aPlayer "<< game.GetPlayer()-1 <<" win ";
	else
		cout<<"==>\aGame draw";

	cin.ignore();
	getchar();
	return 0;
}
