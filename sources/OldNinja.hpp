#ifndef OLDNINJA
#define OLDNINJA
#include "Ninja.hpp"
#include "Point.hpp"

class OldNinja : public Ninja
{
    private:

    public:
        OldNinja(string name, Point place);
        virtual string print();
        virtual void move(Character *enemy);


};
#endif