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
    
    protected:

        string name;
        int health;
        int attack;
        int defense;
        int stamina;
};

class firePokemon : public basePokemon
{
    public:

        firePokemon();
        ~firePokemon();
        void fireCharge();

};

class firePokemon1 : public firePokemon
{
    public:

        firePokemon1();
        ~firePokemon1();  
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