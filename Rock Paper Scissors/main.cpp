#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;


int main()
{
    srand(time(NULL));
    
    bool running = true;
    int playerLives = 3;
    int compLives = 3;
    int playerChoice;
    int compChoice;

    cout << "Game started. \n";
    Sleep(1500);

    while (running)
    {
        compChoice = 1 + (rand() % 3);
        cout << compChoice << endl;

        cout << "Rock(1), Paper(2), Scissors(3) \n";
        cin >> playerChoice;

        if ((playerChoice == 1 && compChoice == 3) || (playerChoice == 2 && compChoice == 1) || (playerChoice == 3 && compChoice == 2))
        {  
            cout << "You win \n\n";
            compLives = compLives - 1;
        }
        else if ((playerChoice == 3 && compChoice == 1) || (playerChoice == 1 && compChoice == 2) || (playerChoice == 2 && compChoice == 3))
        {
            cout << "You lose \n\n";
            playerLives = playerLives - 1;
        }
        else 
        {
            cout << "Draw \n\n";
        }

        if (playerLives == 0 || compLives == 0)
        {
            cout << "end";
        }
    }
    return 0;
}


