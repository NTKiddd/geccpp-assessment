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

void basePokemon::stats()
{
    cout << endl << "Name: " << name << endl << "ID: " << id << endl << "Type: " << type << endl << "Health: " << health; 
    cout << endl << "Attack: " << attack << endl << "Stamina: " << stamina << endl << endl;
}

int basePokemon::getHealth()
{
    return health;
}

void basePokemon::setHealth(int newHealth)
{
    health = newHealth;
}

int basePokemon::getAttack()
{
    return attack;
}

void basePokemon::setAttack(int newAttack)
{
    health = newAttack;
}

int basePokemon::getDefense()
{
    return defense;
}

void basePokemon::setDefense(int newDefense)
{
    defense = newDefense;
}

int basePokemon::getStamina()
{
    return stamina;
}

void basePokemon::setStamina(int newStamina)
{
    health = newStamina;
}

int basePokemon::getSpeed()
{
    return speed;
}

void basePokemon::setSpeed(int newSpeed)
{
    health = newSpeed;
}

void primaryMove(basePokemon attacker, basePokemon target)
{
    target.setHealth(target.health - (attacker.attack - target.defense));
    cout << target.health;
}

/* ---------- FIRE POKEMON ---------- */

firePokemon::firePokemon()
{
    type = 'F';
}

firePokemon::~firePokemon()
{
    
}

void firePokemon::primaryMove()
{
    cout << name << " use Fire Charge";
}

firePokemon1::firePokemon1()
{
    name = "Flareon";
    id = 107;
    health = 120;
    attack = 45;
    defense = 20;
    stamina = 85;
}

firePokemon1::~firePokemon1()
{

}

firePokemon2::firePokemon2()
{
    name = "Charizard";
    id = 122;
    health = 140;
    attack = 55;
    defense = 25;
    stamina = 60;
}

firePokemon2::~firePokemon2()
{

}

firePokemon3::firePokemon3()
{
    name = "Ho-Oh";
    id = 116;
    health = 110;
    attack = 50;
    defense = 15;
    stamina = 75;
}

firePokemon3::~firePokemon3()
{

}

firePokemon4::firePokemon4()
{
    name = "Torkoal";
    id = 109;
    health = 135;
    attack = 40;
    defense = 35;
    stamina = 60;
}

firePokemon4::~firePokemon4()
{

}

firePokemon5::firePokemon5()
{
    name = "Darmanitan";
    id = 131;
    health = 130;
    attack = 50;
    defense = 25;
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

void waterPokemon::primaryMove()
{
    cout << name << " use Water Splash";
}

waterPokemon1::waterPokemon1()
{
    name = "Blastoise";
    id = 203;
    health = 130;
    attack = 45;
    defense = 30;
    stamina = 70;
}

waterPokemon1::~waterPokemon1()
{
    
}

waterPokemon2::waterPokemon2()
{
    name = "Vaporeon";
    id = 217;
    health = 110;
    attack = 55;
    defense = 20;
    stamina = 80;
}

waterPokemon2::~waterPokemon2()
{
    
}

waterPokemon3::waterPokemon3()
{
    name = "Poliwrath";
    id = 256;
    health = 120;
    attack = 60;
    defense = 30;
    stamina = 60;
}

waterPokemon3::~waterPokemon3()
{
    
}

waterPokemon4::waterPokemon4()
{
    name = "Swampert";
    id = 230;
    health = 125;
    attack = 55;
    defense = 20;
    stamina = 65;
}

waterPokemon4::~waterPokemon4()
{
    
}

waterPokemon5::waterPokemon5()
{
    name = "Crawdaunt";
    id = 208;
    health = 95;
    attack = 65;
    defense = 30;
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

void grassPokemon::primaryMove()
{
    cout << name << " use Leaf Slash";
}

grassPokemon1::grassPokemon1()
{
    name = "Venusaur";
    id = 305;
    health = 120;
    attack = 60;
    defense = 30;
    stamina = 70;
}

grassPokemon1::~grassPokemon1()
{
    
}

grassPokemon2::grassPokemon2()
{
    name = "Bayleef";
    id = 328;
    health = 95;
    attack = 55;
    defense = 15;
    stamina = 80;
}

grassPokemon2::~grassPokemon2()
{
    
}

grassPokemon3::grassPokemon3()
{
    name = "Sceptile";
    id = 312;
    health = 110;
    attack = 70;
    defense = 30;
    stamina = 65;
}

grassPokemon3::~grassPokemon3()
{
    
}

grassPokemon4::grassPokemon4()
{
    name = "Shiftry";
    id = 320;
    health = 125;
    attack = 60;
    defense = 30;
    stamina = 60;
}

grassPokemon4::~grassPokemon4()
{
    
}

grassPokemon5::grassPokemon5()
{
    name = "Tropius";
    id = 344;
    health = 120;
    attack = 65;
    defense = 20;
    stamina = 70;
}

grassPokemon5::~grassPokemon5()
{
    
}