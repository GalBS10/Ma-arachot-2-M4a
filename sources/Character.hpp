#ifndef CHARACTER
#define CHARACTER
#include "Point.hpp"
#include "string"

using namespace std;

class Character
{
private:
    Point place;
    int HP;//hit point
    string name;
public:
    Character(Point _place, int _HP, string _name);
    virtual ~Character();
    bool isAlive();
    double distance(Character* other);
    void hit(int damage);
    string getName();
    Point getLoactaion();
    virtual string print();

};
#endif

