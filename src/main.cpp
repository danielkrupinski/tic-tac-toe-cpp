#include <board.h>
#include <iostream>

using namespace std;

int main()
{
    cout << "Select mode:\n 1. Player vs player\n 2. Player vs ai ";
    int mode;
    cin >> mode;
    char again{'Y'};

    while (again == 'Y' || again == 'y')
    {
        string square{"0123456789"};
        char player{'X'};
        int status{-1};
        while (status == -1)
            move(square, player, mode, status);
        if (status == 1)
            cout << "\nPlayer " << player << " won!\n";
        else
            cout << "\nGame draw!\n";
        cout << "\nPlay again? (Y)es, (N)o/(E)xit? ";
        cin >> again;
    }
    return 0;
}
