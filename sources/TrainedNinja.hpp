#ifndef TRAINEDNINJA
#define TRAINEDNINJA
#include "Ninja.hpp"
#include "Point.hpp"

class TrainedNinja : public Ninja
{
    private:
        
    public:
        TrainedNinja(string name, Point place);
        virtual string print();
        virtual void move(Character *enemy);
    
};
#endif