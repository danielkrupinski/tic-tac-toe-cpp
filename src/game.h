#pragma once

enum class GameStatus { in_progress, draw, win };

class Game {
	private:
	char square[9] = {'1','2','3','4','5','6','7','8','9'};
	short choice;
	char mark;
	bool player;
	public:
	GameStatus status;
	Game();	
	void Draw();
	void Move();
	bool Player();
	GameStatus Check();
};

