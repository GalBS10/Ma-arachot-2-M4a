#include "Character.hpp"

class Cowboy : public Character
{
private:
    int bullets_amount;
public:
    Cowboy(Point _place, int _HP, string _name, int _bullets_amount);
    void print();
    int getBullets();
};

