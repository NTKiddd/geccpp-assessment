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
