#include <iostream>
#include <cstdlib>
#include <time.h>
#include <Windows.h>

#include "Pokemon.h"

using namespace std;

basePokemon::basePokemon()
{

}

basePokemon::~basePokemon()
{

}

firePokemon::firePokemon()
{

}

void firePokemon::fireCharge()
{
    cout << name << " use Fire Charge";
}

firePokemon::~firePokemon()
{
    
}

firePokemon1::firePokemon1()
{
    name = "Caraxes";
    health = 150;
    attack = 40;
    defense = 25;
}

firePokemon1::~firePokemon1()
{

}