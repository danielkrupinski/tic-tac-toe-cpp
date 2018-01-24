#include "player.h"

player::player()
{

}

int player::player_id()
{
	return id;
}

int player::player_id(int a)
{
	id = a;
}

char player::player_sign()
{
	return sign;
}

char player::player_sign(char a)
{
	sign = a;
}
