#include "Character.hpp"

class Cowboy : public Character
{
private:
    int bullets_amount;
public:
    Cowboy(string _name,Point _place );
    virtual string print();
    int getBullets();
    void shoot(Character* enemy);
    bool hasboolets();
    void reload();
};

