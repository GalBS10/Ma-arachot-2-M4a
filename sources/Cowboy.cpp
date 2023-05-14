#include "Cowboy.hpp"

Cowboy::Cowboy(string _name, Point _place)
: Character(_place,110,_name)
{
    bullets_amount = 6;
}

string Cowboy::print()
{
    cout << "Cowboy" << endl;
}

int Cowboy::getBullets()
{
    return bullets_amount;
}

void Cowboy::shoot(Character* enemy)
{

}
bool Cowboy::hasboolets()
{
    return true;
}

void Cowboy::reload()
{

}