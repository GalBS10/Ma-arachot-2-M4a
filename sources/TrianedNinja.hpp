#include "Ninja.hpp"

class TrianedNinja : public Ninja
{
    private:
        
    public:
        TrianedNinja(string name, Point place);
        virtual string print();
        virtual void move(Character *enemy);
    
};