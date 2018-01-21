#pragma once


class Game {
	private:
	char square[9] = {'1','2','3','4','5','6','7','8','9'};
	int player = 1,choice;
	char mark;
	public:
	int game_status;
	Game();	
	void Draw();
	void Move();
	int Check();
	int GetPlayer();
};
