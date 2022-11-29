#include <iostream>
#include <cstdlib>
#include <time.h>
#include <Windows.h>

#include "Pokedex.cpp"

using namespace std;

int main()
{   
    firePokemon1 Flareon;
    firePokemon2 Charizard;
    firePokemon3 HoOh;
    firePokemon4 Torkoal;
    firePokemon5 Darmanitan;

    int choice;

    cout << "Choose your Pokemons!";

    cin >> choice;

    if (choice == 1)
        Flareon.fireCharge();

    return 0;
}