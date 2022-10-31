#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

int playerChoice;
int compChoice;
bool checkValid();
void compareResult();
bool running = true;
int playerLives = 3;
int compLives = 3;
void livesAnnouce();
string RPS[6] = {"Rock", "Paper", "Scissors", "Rock", "Paper", "Scissors"};
string playerchoiceDisplay;
string compchoiceDisplay;

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

        if (playerLives == 0)
        {
            cout << "MATCH WINNER: COMPUTER \n";
            running = false;
            exit (0);
        } 
        else if (compLives == 0)
        {
            cout << "MATCH WINNER: PLAYER \n";
            running = false;
            exit (0);
        }
        
        cout << "Computer: " << compChoice << endl;
        cout << "Rock(1), Paper(2), Scissors(3) \n";
        
        checkValid();

        if (checkValid() == true)
        {     
            Sleep(700);
            compareResult();
        }
        Sleep(2500);
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
        return true;
    }
} //receive playerChoice and check if player enter a valid value (1, 2 or 3)

void compareResult()
{
    if (playerChoice == 1)
        cout << "You: " << RPS[0] << "\n";
    else if (playerChoice == 2)
        cout << "You: " << RPS[1] << "\n";
    else if (playerChoice == 3)
        cout << "You: " << RPS[2] << "\n";
        
    if (compChoice == 1)
        cout << "Computer: " << RPS[0] << "\n\n";
    else if (compChoice == 2)
        cout << "Computer: " << RPS[1] << "\n\n";
    else if (compChoice == 3)
        cout << "Computer: " << RPS[2] << "\n\n";

    if ((playerChoice == 1 && compChoice == 3) || (playerChoice == 2 && compChoice == 1) || (playerChoice == 3 && compChoice == 2))
    {  
        cout << "You win! \n\n";
        compLives = compLives - 1;
    }
    else if ((playerChoice == 3 && compChoice == 1) || (playerChoice == 1 && compChoice == 2) || (playerChoice == 2 && compChoice == 3))
    {
        cout << "You lose! \n\n";
        playerLives = playerLives - 1;
    }
    else if (playerChoice == compChoice) 
    {
        cout << "Draw! \n\n";
    }
    //compare choices and announce the result every turn
}

void livesAnnouce()
{
    cout << "Your lives: " << playerLives << "\n";
    cout << "Computer lives: " << compLives << "\n\n";
}
