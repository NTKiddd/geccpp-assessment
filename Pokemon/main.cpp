#include <iostream>
#include <cstdlib>
#include <time.h>
#include <Windows.h>

#include "Pokedex.cpp"

using namespace std;

int main()
{   
    firePokemon1 Darmanitan;
    firePokemon2 Flareon;
    firePokemon3 Torkoal;
    firePokemon4 Charizard;
    firePokemon5 HoOh;

    int choice;

    cout << "Choose your Pokemons!";

    cin >> choice;

    if (choice == 1)
        Flareon.fireCharge();

    return 0;
}