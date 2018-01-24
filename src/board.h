#pragma once

class board {
	private:
	char square[] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	public:
	board();
	void draw();
	int check();
	
};
