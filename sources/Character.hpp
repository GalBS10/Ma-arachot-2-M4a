#include <stdlib.h>
#include <stdio.h>
#include "Point.cpp"

class Character
{
private:
    Point place;
    int HP;//hit point
    string name;
public:
    Character(Point _place, int _HP, string _name);
    bool isAlive();
    double distance(Character* other);
    void hit(int damage);
    string getName();
    Point getLoactaion();
    // void print();

};

