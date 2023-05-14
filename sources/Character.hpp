#ifndef CHARACTER
#define CHARACTER
#include "Point.hpp"

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
    virtual string print();

};
#endif

