#include "Ninja.hpp"

class YoungNinja : public Ninja
{
    private:
    
    public:
        YoungNinja(string name, Point place);
        virtual string print();
        virtual void move(Character *enemy);
    
};

