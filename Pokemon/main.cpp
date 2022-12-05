#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
#include <fstream>
#include <array>
#include <conio.h>

#include "Pokemon.cpp"

using namespace std;

int main()
{   
    void ClearScreen();
    int OpponentChoice();

    int choice;
    int chosen[4];
    int command;
    bool atChoosingPhase = true;
    bool choosing = true;
    bool choiceValid;
    bool battling = true;
    char accept;
    
    string lineup[4];

    basePokemon aP[15] = {Flareon, Charizard, HoOh, Torkoal, Darmanitan, Blastoise, Vaporeon, Poliwrath, Swampert, Crawdaunt, Venusaur, Bayleef, Sceptile, Shiftry, Tropius};
    firePokemon fireTrainer[4];
    waterPokemon waterTrainer[4];
    grassPokemon grassTrainer[4];
    basePokemon ally;
    basePokemon opponent;
    //ifstream finname;

    //finname.open("AllPokemonName.txt");

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    
    while (atChoosingPhase)
    {   
        for (int j = 0; j < 4;)
        {   
            cout << "Choose your Pokemons! \n";
            for (int i = 0; i < 15; i++)
            {    
                switch (i)
                {
                    case 0:
                        cout << endl << "FIRE \n";
                        break;
                    case 5:
                        cout << endl << "WATER \n";
                        break;
                    case 10:
                        cout << endl << "GRASS \n";
                        break;
                }
                cout << "(" << i + 1 << ") " << aP[i].name << endl;
            }
            if (j > 0)
            {
                cout << "\n" << "Your lineup: \n";
            }

            for (int k = 0; k < j; k++)
            {
                cout << lineup[k] << "\n";
            }

            choiceValid = true;
            cin >> choice;
            if (choice < 1 || choice > 15)
            {   
                cout << "Invalid. Please re-enter a valid value";
                choiceValid = false;
            }
            else
            {
                for (int l = 0; l < 4; l++)
                {
                    if (choice == chosen[l])
                    {
                        cout << "You have chosen this Pokemon. Please choose another one. \n";
                        choiceValid = false;
                    }
                }
            }

            if (choiceValid)
            {   
                ClearScreen();

                cout << "You choose " << aP[choice - 1].name;

                aP[choice - 1].stats();

                if (j == 3)
                {   
                    atChoosingPhase = false;
                }

                cout << "Do you choose this Pokemon? Yes(Y) / No(N) \n";
                cin >> accept;

                switch (accept)
                {
                    case 'Y':
                        chosen[j] = choice;
                        lineup[j] = aP[choice - 1].name;
                        j++;
                }
                ClearScreen();
            }
        }
    }
    cout << "Your lineup: \n";
    for (int k = 0; k < 4; k++)
    {
        cout << lineup[k] << "\n";
    }

    cout << "Press any key to continue... \n";
    _getch();
    ClearScreen();

    OpponentChoice();
    switch (OpponentChoice())
    {   
        int temp[4];
        srand(time(NULL));
        for (int i = 0; i < 4; i++)
        {
            int random = 0 + (rand() % 5);
            for (int j = 0; j < 4; j++)
            {
                if (random == temp[j])
                    break;
                else 
                    random == temp[i];
            }
        }
    }
    
    ally = Charizard;
    opponent = Venusaur;
    while (battling)
    {
        cout << "Opponent: " << opponent.name << endl;
        cout << "Health: " << opponent.health << endl;
        cout << "Attack: " << opponent.attack << endl;
        cout << "Defense: " << opponent.defense << endl;
        cout << "Stamina: " << opponent.stamina << endl << endl;

        cout << "You: " << ally.name << endl;
        cout << "Health: " << ally.health << endl;
        cout << "Attack: " << ally.attack << endl;
        cout << "Defense: " << ally.defense << endl;
        cout << "Stamina: " << ally.stamina << endl << endl;

        cout << "Choose your move!";
        cin >> command;
        switch (command)
        {
            case 1:
                ally.primaryMove(opponent);
                break;

            case 2:
                //ally.secondaryMove(opponent);
                break;

            case 3:
                break;
        }
        opponent.takeDamage(ally, command);
        Sleep(3000);
        ClearScreen();

        if (ally.health <= 0)
        {
            ally.health = 0;
            cout << "Your Pokemon has been defeated! \n";
        }
        else if (opponent.health <= 0)
        {
            opponent.health = 0;
            cout << "Opponent's Pokemon has been defeated! \n";
        }
    }
    return 0;
}

int OpponentChoice()
{
    cout << "Choose your Opponent \n";
    cout << "(1) Fire Trainer \n";
    cout << "(2) Water Trainer \n";
    cout << "(3) Grass Trainer \n";
    cout << "(4) Final Trainer \n";

    int choice;
    cin >> choice;

    return choice;
}















void ClearScreen()
{
HANDLE                     hStdOut;
CONSOLE_SCREEN_BUFFER_INFO csbi;
DWORD                      count;
DWORD                      cellCount;
COORD                      homeCoords = { 0, 0 };

hStdOut = GetStdHandle( STD_OUTPUT_HANDLE );
if (hStdOut == INVALID_HANDLE_VALUE) return;

/* Get the number of cells in the current buffer */
if (!GetConsoleScreenBufferInfo( hStdOut, &csbi )) return;
cellCount = csbi.dwSize.X *csbi.dwSize.Y;

/* Fill the entire buffer with spaces */
if (!FillConsoleOutputCharacter(
hStdOut,
(TCHAR) ' ',
cellCount,
homeCoords,
&count
)) return;

/* Fill the entire buffer with the current colors and attributes */
if (!FillConsoleOutputAttribute(
hStdOut,
csbi.wAttributes,
cellCount,
homeCoords,
&count
)) return;

/* Move the cursor home */
SetConsoleCursorPosition( hStdOut, homeCoords );
}

