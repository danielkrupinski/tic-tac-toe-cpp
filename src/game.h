#pragma once

enum class GameStatus { in_progress, draw, win };

class Game {
	private:
	char square[9] = {'1','2','3','4','5','6','7','8','9'};
	int choice;
	char mark;
	public:
	GameStatus status;
	int player;
	Game();	
	void Draw();
	void Move();
	GameStatus Check();
};
