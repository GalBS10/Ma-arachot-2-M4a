#include "Character.hpp"

Character::Character(Point _place, int _HP, string _name) : place(_place), HP(_HP), name(_name){
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