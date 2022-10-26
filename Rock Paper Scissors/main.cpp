#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

int playerChoice();

int main()
{
    srand(time(NULL));
    
    int playerLives = 3;
    int compLives = 3;
    int compChoice = 1 + (rand() % 2);

    cout << "Game started. \n";
    Sleep(1500);
    playerChoice();
    
    if (playerChoice() == compChoice)
    cout << "Draw";

    return 0;
}

int playerChoice()
{
    int choice;
    
    cout << "Rock(1), Paper(2), Scissors(3) \n";
    cin >> choice;

    return choice;
}
