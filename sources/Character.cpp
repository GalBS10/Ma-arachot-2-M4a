#include "Character.hpp"
#include "Point.hpp"

Character::Character(Point _place, int hitpoint, string _name) : place(_place), HP(hitpoint), name(_name)
{

}
Character::Character(const Character& other)
    : place(other.place), HP(other.HP), name(other.name)
{
    // Copy constructor implementation
    // You can add any necessary additional copying logic here
}
Character::~Character(){
    
}
Character& Character::operator=(const Character& other)
{
    if (this != &other) {
        place = other.place;
        HP = other.HP;
        name = other.name;
        // Copy assignment operator implementation
        // You can add any necessary additional copying logic here
    }
    return *this;
}

Character::Character(Character&& other) noexcept
    : place(std::move(other.place)), HP(std::move(other.HP)), name(std::move(other.name))
{
    // Move constructor implementation
    // You can add any necessary additional moving logic here
}

Character& Character::operator=(Character&& other) noexcept
{
    if (this != &other) {
        place = std::move(other.place);
        HP = std::move(other.HP);
        name = std::move(other.name);
        // Move assignment operator implementation
        // You can add any necessary additional moving logic here
    }
    return *this;
}

bool Character::isAlive(){
    return true;
}
double Character::distance(Character* other){
    return 0.0;
}
void Character::hit(int damage){

}
string Character::getName(){
    return "";
}

Point Character::getLoactaion(){
    return Point(0.0,0.0);
}

string Character::print()
{
    return "";
}
