#include <iostream>
#include <cstdlib>
#include <time.h>
#include <Windows.h>

#include "Pokemon.cpp"

using namespace std;

int main()
{   
    firePokemon Caraxes;
    int choice;

    cin >> choice;

    if (choice == 1)
        Caraxes.fireCharge();

    return 0;
}