#include <iostream>
#include <cstdlib>
#include <time.h>
#include <Windows.h>
#include <fstream>
#include <array>

#include "Pokedex.cpp"

using namespace std;

int main()
{   
    int choice;
    array<int, 4> chosen;
    bool atChoosingPhase = true;
    bool choosing = true;
    bool choiceValid;
    
    basePokemon aP[15] = {Flareon, Charizard, HoOh, Torkoal, Darmanitan, Blastoise, Vaporeon, Poliwrath, Swampert, Crawdaunt, Venusaur, Bayleef, Sceptile, Shiftry, Tropius};
    string name[15];
    string lineup[4];
    //ifstream finname;

    //finname.open("AllPokemonName.txt");
    while (atChoosingPhase)
    {
        cout << "Choose your Pokemons! \n";

        for (int i = 0; i < 15; i++)
        {   
            name[i] = aP[i].name; 
            cout << "(" << i + 1 << ") " << name[i] << endl;
        }

        while (choosing)
        {
            for (int j = 0; j < 4;)
            {   
                choiceValid = true;
                cin >> choice;
                if (choice < 1 || choice > 15)
                {   
                    cout << j;
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
                    chosen[j] = choice;
                    lineup[j] = name[choice - 1];
                    j++;

                    cout << "You choose " << name[choice - 1];

                    aP[choice - 1].stats();

                    if (j == 3)
                    {   
                        choosing = false;
                        atChoosingPhase = false;
                    }
                }
            }
        }
    }
    cout << "Your lineup: \n";
    for (int k = 0; k < 4; k++)
    {
        cout << lineup[k] << "\n";
    }
    return 0;
}

