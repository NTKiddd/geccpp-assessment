#include <iostream>
#include <cstdlib>
#include <time.h>
#include <Windows.h>
#include <fstream>

#include "Pokedex.cpp"

using namespace std;

int main()
{   
    int choice;
    int chosen[4];
    bool choosing = true;
    bool choiceValid;
    
    basePokemon aP[15] = {Flareon, Charizard, HoOh, Torkoal, Darmanitan, Blastoise, Vaporeon, Poliwrath, Swampert, Crawdaunt, Venusaur, Bayleef, Sceptile, Shiftry, Tropius};
    string name[15];
    string lineup[4];
    //ifstream finname;

    //finname.open("AllPokemonName.txt");
    while (choosing)
    {
        cout << "Choose your Pokemons! \n";
        cout << sizeof(chosen);

        for (int i = 0; i < 15; i++)
        {   
            name[i] = aP[i].name; 
            cout << "(" << i + 1 << ") " << name[i] << endl;
        }

        for (int j = 0; j < 4; j++)
        {
            cin >> choice;
            for (int l = 0; l < 4; l++)
            {
                if  (choice == chosen[l])
                {
                    cout << "You have chosen this Pokemon. Please choose another one.";
                    choiceValid = false;
                }
                else 
                    choiceValid = true;
            }

            if (choiceValid)
            {
                chosen[j] = choice;
                
                cout << "You choose " << name[choice - 1];
                lineup[j] = name[choice - 1];

                aP[choice - 1].stats();
 

                if (j == 3)
                {
                    choosing = false;
                }
            }
        }
    }
    cout << "Your lineup: \n";
    for (int k = 0; k < 4; k++)
        cout << lineup[k] << "\n";

    return 0;
}