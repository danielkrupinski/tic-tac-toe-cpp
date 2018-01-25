#pragma once
#include <iostream>

using namespace std;

class board {
	private:
	string square = "0123456789";
	public:
	board();
	void draw();
	int check();
	
};
