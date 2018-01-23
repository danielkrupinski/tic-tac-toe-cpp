#include "game.h"

using namespace std;

Game::Game()
{
	status = GameStatus::in_progress;
	player = 0;
}

void Game::Draw()
{
	system("clear");
	cout << "\n\n\tTic-Tac-Toe\n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << square[0] << "  |  " << square[1] << "  |  " << square[2] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[3] << "  |  " << square[4] << "  |  " << square[5] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[6] << "  |  " << square[7] << "  |  " << square[8] << endl;

	cout << "     |     |     " << endl << endl;

}

void Game::Move()
{
		cout << "Player " << player+1 << ", enter a number:  ";
		cin >> choice;

		if (choice == 1 && square[0] == '1')

			square[0] = player == 0 ? 'X' : 'O';
		else if (choice == 2 && square[1] == '2')

			square[1] = player == 0 ? 'X' : 'O';
		else if (choice == 3 && square[2] == '3')

			square[2] = player == 0 ? 'X' : 'O';
		else if (choice == 4 && square[3] == '4')

			square[3] = player == 0 ? 'X' : 'O';
		else if (choice == 5 && square[4] == '5')

			square[4] = player == 0 ? 'X' : 'O';
		else if (choice == 6 && square[5] == '6')

			square[5] = player == 0 ? 'X' : 'O';
		else if (choice == 7 && square[6] == '7')

			square[6] = player == 0 ? 'X' : 'O';
		else if (choice == 8 && square[7] == '8')

			square[7] = player == 0 ? 'X' : 'O';
		else if (choice == 9 && square[8] == '9')

			square[8] = player == 0 ? 'X' : 'O';
		else
		{
			cout<<"Invalid move ";
			cin.ignore();
			cin.get();
			return;
		}
		player == 0 ? player = 1 : player = 0;
		status = Check();
}

GameStatus Game::Check()
{
	if (square[0] == square[1] && square[1] == square[2])

		return GameStatus::win;
	else if (square[3] == square[4] && square[4] == square[5])

		return GameStatus::win;
	else if (square[6] == square[7] && square[7] == square[8])

		return GameStatus::win;
	else if (square[0] == square[3] && square[3] == square[6])

		return GameStatus::win;
	else if (square[1] == square[4] && square[4] == square[7])

		return GameStatus::win;
	else if (square[2] == square[5] && square[5] == square[8])

		return GameStatus::win;
	else if (square[0] == square[4] && square[4] == square[8])

		return GameStatus::win;
	else if (square[2] == square[4] && square[4] == square[6])

		return GameStatus::win;
	else if (square[0] != '1' && square[1] != '2' && square[2] != '3' 
                    && square[3] != '4' && square[4] != '5' && square[5] != '6' 
                  && square[6] != '7' && square[7] != '8' && square[8] != '9')

		return GameStatus::draw;
	else
		return GameStatus::in_progress;
}

bool Game::Player()
{
	return player;
}

