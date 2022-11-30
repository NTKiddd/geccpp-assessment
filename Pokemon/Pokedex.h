#include <iostream>
#include <cstdlib>
#include <time.h>
#include <Windows.h>

using namespace std;

class basePokemon
{
    public:
        basePokemon();
        ~basePokemon();
    
        string name;
        char type;
        int id;
        int health;
        int attack;
        int defense;
        int stamina;
};

/* ---------- FIRE POKEMON ---------- */

class firePokemon : public basePokemon
{
    public:
        firePokemon();
        ~firePokemon();
        void fireCharge(); //primary move
};

class firePokemon1 : public firePokemon
{
    public:
        firePokemon1();
        ~firePokemon1();
        void flameThrower();  //secondary move
        void blastBurn();   //third move
};

class firePokemon2 : public firePokemon
{
    public:
        firePokemon2();
        ~firePokemon2();  
};

class firePokemon3 : public firePokemon
{
    public:
        firePokemon3();
        ~firePokemon3();  
};

class firePokemon4 : public firePokemon
{
    public:
        firePokemon4();
        ~firePokemon4();  
};

class firePokemon5 : public firePokemon
{
    public:
        firePokemon5();
        ~firePokemon5();  
};

/* ---------- WATER POKEMON ---------- */

class waterPokemon : public basePokemon
{
    public:
        waterPokemon();
        ~waterPokemon();
        void waterSplash(); 
};

class waterPokemon1 : public waterPokemon
{
    public:
        waterPokemon1();
        ~waterPokemon1();
};

class waterPokemon2 : public waterPokemon
{
    public:
        waterPokemon2();
        ~waterPokemon2();
};

class waterPokemon3 : public waterPokemon
{
    public:
        waterPokemon3();
        ~waterPokemon3();
};

class waterPokemon4 : public waterPokemon
{
    public:
        waterPokemon4();
        ~waterPokemon4();
};

class waterPokemon5 : public waterPokemon
{
    public:
        waterPokemon5();
        ~waterPokemon5();
};

/* ---------- GRASS POKEMON ---------- */

class grassPokemon : public basePokemon
{
    public:
        grassPokemon();
        ~grassPokemon();
        void Leafage(); //primary move
};

class grassPokemon1 : public grassPokemon
{
    public:
        grassPokemon1();
        ~grassPokemon1();
};

class grassPokemon2 : public grassPokemon
{
    public:
        grassPokemon2();
        ~grassPokemon2();
};

class grassPokemon3 : public grassPokemon
{
    public:
        grassPokemon3();
        ~grassPokemon3();
};

class grassPokemon4 : public grassPokemon
{
    public:
        grassPokemon4();
        ~grassPokemon4();
};

class grassPokemon5 : public grassPokemon
{
    public:
        grassPokemon5();
        ~grassPokemon5();
};