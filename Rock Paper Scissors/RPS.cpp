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
void livesAnnouce();

int main()
{   
    srand(time(NULL));

    cout << "Game started. \n";
    Sleep(1300);

    while (running)
    {
        system("cls");
        compChoice = 1 + (rand() % 3);  //randomly pick up a number from 1 to 3 for compChoice

        livesAnnouce();
        
        cout << "Computer: " << compChoice << endl;
        cout << "Rock(1), Paper(2), Scissors(3) \n";
        cin >> playerChoice;
        
        checkValid();

        if (checkValid() == true)
        {
            Sleep(500);
            compareResult();
        }
        Sleep(2500);
    }
    return 0;
}

bool checkValid()
{
    
    if (playerChoice > 3 || playerChoice < 1)
    {
        cout << "Please enter a valid value \n";
        return false;
    }
    else 
    {
        return true;
    }
} //receive playerChoice and check if player enter a valid value (1, 2 or 3)

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
    //compare choices and announce the result
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

void livesAnnouce()
{
    cout << "Your lives: " << playerLives << "\n";
    cout << "Computer lives: " << compLives << "\n\n";
}