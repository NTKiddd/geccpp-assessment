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

firePokemon::~firePokemon()
{
    
}

void firePokemon::fireCharge()
{
    cout << name << " use Fire Charge";
}

Caraxes::Caraxes()
{
    name = "Caraxes";
    health = 150;
    attack = 40;
    defense = 25;
}