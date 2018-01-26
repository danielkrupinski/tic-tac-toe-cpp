#pragma once

#include "board.h"

class player {
	private:
	int id;
	char sign;
	public:
	player();
	int player_id();
	int player_id(int a);
	char player_sign();
	char player_sign(char a);
	void move(board &Board);
};
