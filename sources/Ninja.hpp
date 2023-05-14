#include "Character.hpp"

class Ninja : public Character
{
private:
    int speed;
public:
    Ninja( Point _place, int HP, string _name, int _speed);
    void slash(Character* enemy);
    virtual string print();
    virtual void move(Character *enemy);
};


