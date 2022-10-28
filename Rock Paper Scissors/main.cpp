#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

int playerChoice;
int compChoice;
string playerchoiceDisplay;
bool checkValid();
void compareResult();
bool running = true;
int playerLives = 3;
int compLives = 3;

int main()
{   
    srand(time(NULL));

    cout << "Game started. \n";
    Sleep(1500);

    while (running)
    {
        compChoice = 1 + (rand() % 3);
        cout << "Computer: " << compChoice << endl;

        cout << "Rock(1), Paper(2), Scissors(3) \n";
        
        checkValid();

        if (checkValid() == true)
        {
            compareResult();
        }
    }
    return 0;
}

bool checkValid()
{
    cin >> playerChoice;
    if (playerChoice > 3 || playerChoice < 1)
    {
        cout << "Please enter a valid value \n";
        return false;
    }
    else 
    {
        cout << "hi";
        return true;
    }
}

void compareResult()
{
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
    else if (playerChoice == compChoice) 
    {
        cout << "Draw \n\n";
    }

    if (playerLives == 0)
    {
        cout << "WINNER: COMPUTER";
        running = false;
    } 
    else if (compLives == 0)
    {
        cout << "WINNER: PLAYER";
        running = false;
    }
}