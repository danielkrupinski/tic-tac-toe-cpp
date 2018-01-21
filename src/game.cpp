#include "game.h"

using namespace std;

Game::Game()
{
	game_status = -1;
}

void Game::Draw()
{
	system("clear");
	cout << "\n\n\tTic Tac Toe\n\n";

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
		player=(player%2)?1:2;
		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;

		mark=(player == 1) ? 'X' : 'O';

		if (choice == 1 && square[0] == '1')

			square[0] = mark;
		else if (choice == 2 && square[1] == '2')

			square[1] = mark;
		else if (choice == 3 && square[2] == '3')

			square[2] = mark;
		else if (choice == 4 && square[3] == '4')

			square[3] = mark;
		else if (choice == 5 && square[4] == '5')

			square[4] = mark;
		else if (choice == 6 && square[5] == '6')

			square[5] = mark;
		else if (choice == 7 && square[6] == '7')

			square[6] = mark;
		else if (choice == 8 && square[7] == '8')

			square[7] = mark;
		else if (choice == 9 && square[8] == '9')

			square[8] = mark;
		else
		{
			cout<<"Invalid move ";

			player--;
			cin.ignore();
			cin.get();
		}
		game_status=Check();
		player++;
}

int Game::Check()
{
	if (square[0] == square[1] && square[1] == square[2])

		return 1;
	else if (square[3] == square[4] && square[4] == square[5])

		return 1;
	else if (square[6] == square[7] && square[7] == square[8])

		return 1;
	else if (square[0] == square[3] && square[3] == square[6])

		return 1;
	else if (square[1] == square[4] && square[4] == square[7])

		return 1;
	else if (square[2] == square[5] && square[5] == square[8])

		return 1;
	else if (square[0] == square[4] && square[4] == square[8])

		return 1;
	else if (square[2] == square[4] && square[4] == square[6])

		return 1;
	else if (square[0] != '1' && square[1] != '2' && square[2] != '3' 
                    && square[3] != '4' && square[4] != '5' && square[5] != '6' 
                  && square[6] != '7' && square[7] != '8' && square[8] != '9')

		return 0;
	else
		return -1;
}

int Game::GetPlayer()
{
	return player;
}
