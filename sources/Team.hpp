#ifndef TEAM
#define TEAM
#include "Point.hpp"
#include "Cowboy.hpp"
#include "OldNinja.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"
#include "list"

#define SIZE 10

namespace ariel{
    
}
class Team
{
private:
    list<Character> team;
    Character* leader;
public:
    Team(Character* char_leader);
    ~Team();
    void add(Character* new_char);
    void attack(Team* enemy_team);
    int stillAlive();
    void print();


};

#endif