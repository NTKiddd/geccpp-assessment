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
        void stats();
        void setHealth(int newHealth);
        void setAttack(int newAttack);
        void setDefense(int newDefense);
        void setStamina(int newStamina);
        void setSpeed(int newSpeed);

        string name;
        char type;
        int id;
        int health;
        int attack;
        int defense;
        int stamina;
        int speed;
        
        string move;
        int staminaCost;
        int damage;

        void primaryMove(basePokemon target);
        void takeDamage(basePokemon attacker, int moveType);
};

/* ---------- FIRE POKEMON ---------- */

class firePokemon : public basePokemon
{
    public:
        firePokemon();
        ~firePokemon();
        void primaryMove(basePokemon target);
        void secondaryMove1(basePokemon target);
        void secondaryMove2(basePokemon target);
};

class firePokemon1 : public firePokemon
{
    public:
        firePokemon1();
        ~firePokemon1();
        void secondaryMove();
        void thirdMove();
};

class firePokemon2 : public firePokemon
{
    public:
        firePokemon2();
        ~firePokemon2(); 
        void secondaryMove();
        void thirdMove(); 
};

class firePokemon3 : public firePokemon
{
    public:
        firePokemon3();
        ~firePokemon3(); 
        void secondaryMove();
        void thirdMove(); 
};

class firePokemon4 : public firePokemon
{
    public:
        firePokemon4();
        ~firePokemon4();  
        void secondaryMove();
        void thirdMove();
};

class firePokemon5 : public firePokemon
{
    public:
        firePokemon5();
        ~firePokemon5();  
        void secondaryMove();
        void thirdMove();
};

/* ---------- WATER POKEMON ---------- */

class waterPokemon : public basePokemon
{
    public:
        waterPokemon();
        ~waterPokemon();
        void primaryMove();
};

class waterPokemon1 : public waterPokemon
{
    public:
        waterPokemon1();
        ~waterPokemon1();
        void secondaryMove();
        void thirdMove();
};

class waterPokemon2 : public waterPokemon
{
    public:
        waterPokemon2();
        ~waterPokemon2();
        void secondaryMove();
        void thirdMove();
};

class waterPokemon3 : public waterPokemon
{
    public:
        waterPokemon3();
        ~waterPokemon3();
        void secondaryMove();
        void thirdMove();
};

class waterPokemon4 : public waterPokemon
{
    public:
        waterPokemon4();
        ~waterPokemon4();
        void secondaryMove();
        void thirdMove();
};

class waterPokemon5 : public waterPokemon
{
    public:
        waterPokemon5();
        ~waterPokemon5();
        void secondaryMove();
        void thirdMove();
};

/* ---------- GRASS POKEMON ---------- */

class grassPokemon : public basePokemon
{
    public:
        grassPokemon();
        ~grassPokemon();
        void primaryMove();
};
class grassPokemon1 : public grassPokemon
{
    public:
        grassPokemon1();
        ~grassPokemon1();
        void secondaryMove();
        void thirdMove();
};

class grassPokemon2 : public grassPokemon
{
    public:
        grassPokemon2();
        ~grassPokemon2();
        void secondaryMove();
        void thirdMove();
};

class grassPokemon3 : public grassPokemon
{
    public:
        grassPokemon3();
        ~grassPokemon3();
        void secondaryMove();
        void thirdMove();
};

class grassPokemon4 : public grassPokemon
{
    public:
        grassPokemon4();
        ~grassPokemon4();
        void secondaryMove();
        void thirdMove();
};

class grassPokemon5 : public grassPokemon
{
    public:
        grassPokemon5();
        ~grassPokemon5();
        void secondaryMove();
        void thirdMove();
};

    firePokemon1 Flareon;
    firePokemon2 Charizard;
    firePokemon3 HoOh;
    firePokemon4 Torkoal;
    firePokemon5 Darmanitan;
    waterPokemon1 Blastoise;
    waterPokemon2 Vaporeon;
    waterPokemon3 Poliwrath;
    waterPokemon4 Swampert;
    waterPokemon5 Crawdaunt;
    grassPokemon1 Venusaur;
    grassPokemon2 Bayleef;
    grassPokemon3 Sceptile;
    grassPokemon4 Shiftry;
    grassPokemon5 Tropius;