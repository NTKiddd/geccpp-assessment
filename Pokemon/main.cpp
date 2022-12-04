#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
#include <fstream>
#include <array>
#include <conio.h>

#include "Pokedex.cpp"

using namespace std;

int main()
{   
    void ClearScreen();

    int choice;
    int chosen[4];
    bool atChoosingPhase = true;
    bool choosing = true;
    bool choiceValid;
    char accept;
    
    string lineup[4];

    basePokemon aP[15] = {Flareon, Charizard, HoOh, Torkoal, Darmanitan, Blastoise, Vaporeon, Poliwrath, Swampert, Crawdaunt, Venusaur, Bayleef, Sceptile, Shiftry, Tropius};
    waterPokemon waterTrainer[5] = {Blastoise, Vaporeon, Poliwrath, Swampert, Crawdaunt};
    //ifstream finname;

    //finname.open("AllPokemonName.txt");

    /*
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

    cout << "Press any key to continue... \n";
    _getch();
    ClearScreen();
    */

    cout << "Your Pokemon: " << Charizard.name;
    Charizard.primaryMove(Blastoise);

    return 0;
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

