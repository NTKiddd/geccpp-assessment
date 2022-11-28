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

class Caraxes : public firePokemon
{
    public:

        Caraxes();
        ~Caraxes();
};