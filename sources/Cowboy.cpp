#include "Cowboy.hpp"
#include "Point.hpp"
#include "Character.hpp"


Cowboy::Cowboy(string _name, Point _place)
: Character(_place,110,_name)
{
    bullets_amount = 6;
}

string Cowboy::print()
{
    return "";
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