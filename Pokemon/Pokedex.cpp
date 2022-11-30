#include <iostream>
#include <cstdlib>
#include <time.h>
#include <Windows.h>

#include "Pokedex.h"

using namespace std;

basePokemon::basePokemon()
{

}

basePokemon::~basePokemon()
{

}

/* ---------- FIRE POKEMON ---------- */

firePokemon::firePokemon()
{
    type = 'F';
}

firePokemon::~firePokemon()
{
    
}

//primary move
void firePokemon::fireCharge()
{
    cout << name << " use Fire Charge";
}

firePokemon1::firePokemon1()
{
    name = "Flareon";
    health = 120;
    attack = 45;
    defense = 40;
    stamina = 85;
}

firePokemon1::~firePokemon1()
{

}

firePokemon2::firePokemon2()
{
    name = "Charizard";
    health = 140;
    attack = 55;
    defense = 45;
    stamina = 60;
}

firePokemon2::~firePokemon2()
{

}

firePokemon3::firePokemon3()
{
    name = "Ho-Oh";
    health = 110;
    attack = 50;
    defense = 30;
    stamina = 75;
}

firePokemon3::~firePokemon3()
{

}

firePokemon4::firePokemon4()
{
    name = "Torkoal";
    health = 135;
    attack = 40;
    defense = 55;
    stamina = 60;
}

firePokemon4::~firePokemon4()
{

}

firePokemon5::firePokemon5()
{
    name = "Darmanitan";
    health = 130;
    attack = 50;
    defense = 50;
    stamina = 50;
}

firePokemon5::~firePokemon5()
{

}

/* ---------- WATER POKEMON ---------- */

waterPokemon::waterPokemon()
{
    type = 'W';
}

waterPokemon::~waterPokemon()
{
    
}

//primary move
void waterPokemon::waterSplash()
{
    cout << name << " use Water Splash";
}

waterPokemon1::waterPokemon1()
{
    name = "Blastoise";
    health = 130;
    attack = 45;
    defense = 50;
    stamina = 70;
}

waterPokemon1::~waterPokemon1()
{
    
}

waterPokemon2::waterPokemon2()
{
    name = "Vaporeon";
    health = 110;
    attack = 55;
    defense = 45;
    stamina = 80;
}

waterPokemon2::~waterPokemon2()
{
    
}

waterPokemon3::waterPokemon3()
{
    name = "Poliwrath";
    health = 120;
    attack = 60;
    defense = 50;
    stamina = 60;
}

waterPokemon3::~waterPokemon3()
{
    
}

waterPokemon4::waterPokemon4()
{
    name = "Swampert";
    health = 125;
    attack = 55;
    defense = 45;
    stamina = 65;
}

waterPokemon4::~waterPokemon4()
{
    
}

waterPokemon5::waterPokemon5()
{
    name = "Crawdaunt";
    health = 95;
    attack = 65;
    defense = 45;
    stamina = 80;
}

waterPokemon5::~waterPokemon5()
{
    
}

/* ---------- GRASS POKEMON ---------- */

grassPokemon::grassPokemon()
{
    type = 'G';
}

grassPokemon::~grassPokemon()
{
    
}

//primary move
void Leafage()
{

}

grassPokemon1::grassPokemon1()
{
    name = "Venusaur";
    health = 120;
    attack = 60;
    defense = 50;
    stamina = 70;
}

grassPokemon1::~grassPokemon1()
{
    
}

grassPokemon2::grassPokemon2()
{
    name = "Bayleef";
    health = 95;
    attack = 55;
    defense = 60;
    stamina = 80;
}

grassPokemon2::~grassPokemon2()
{
    
}

grassPokemon3::grassPokemon3()
{
    name = "Sceptile";
    health = 110;
    attack = 70;
    defense = 55;
    stamina = 65;
}

grassPokemon3::~grassPokemon3()
{
    
}

grassPokemon4::grassPokemon4()
{
    name = "Shiftry";
    health = 125;
    attack = 60;
    defense = 75;
    stamina = 60;
}

grassPokemon4::~grassPokemon4()
{
    
}

grassPokemon5::grassPokemon5()
{
    name = "Tropius";
    health = 120;
    attack = 65;
    defense = 70;
    stamina = 70;
}

grassPokemon5::~grassPokemon5()
{
    
}