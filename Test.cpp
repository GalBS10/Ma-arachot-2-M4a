#include "doctest.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "sources/Team.hpp"

using namespace ariel;

TEST_CASE("initialize..."){

    Point a(32.3,44),b(1.3,3.5);
    CHECK(a.getX() == 32.3);
    CHECK(a.getY() == 44);
    CHECK(a.distance(b)==b.distance(a));
    CHECK_THROWS(Character(a,120,"SOMEONE"));//because Character has virtual functions it is abstract.
    CHECK_THROWS(Ninja(a,120,"SOMEONE",10));//same reason.
    Cowboy c1("c1",b);
    CHECK(c1.getName() == "c1");
    CHECK(c1.isAlive() == true);
    CHECK(c1.getBullets() == 16);
    CHECK(c1.hasboolets() == true);
    OldNinja ON("OldNinja",Point(2.0,2.0));
    CHECK(ON.getName() == "OldNinja");
    CHECK(ON.isAlive() == true);
    YoungNinja YN("YoungNinja",Point(3.0,3.0));
    CHECK(YN.getName() == "YoungNinja");
    CHECK(YN.isAlive() == true);
    TrainedNinja TN("Trainedinja",Point(4.0,4.0));
    CHECK(TN.getName() == "TrainedNinja");
    CHECK(TN.isAlive() == true);
    Team t1(&c1);
    CHECK(t1.stillAlive()==1);//there is only one member that is still alive.
    CHECK_NOTHROW(t1.add(&ON));
    CHECK_THROWS(t1.add(&ON));//cant add same character.
    //currently there are 2 members.
    Cowboy c3("c3",Point(11.0,11.0));
    Cowboy c4("c4",Point(22.0,22.0));
    Cowboy c5("c5",Point(33.0,33.0));
    Cowboy c6("c6",Point(44.0,44.0));
    Cowboy c7("c7",Point(55.0,55.0));
    Cowboy c8("c8",Point(66.0,66.0));
    Cowboy c9("c9",Point(77.0,77.0));
    Cowboy c10("c10",Point(88.0,88.0));
    Cowboy c11("c11",Point(99.0,99.0));

    t1.add(&c3);
    t1.add(&c4);
    t1.add(&c5);
    t1.add(&c6);
    t1.add(&c7);
    t1.add(&c8);
    t1.add(&c9);
    t1.add(&c10);
    CHECK_THROWS(t1.add(&c11));//cant be more then 10 in a group.
    // CHECK_THROWS(Team t2(&c1));//cant create team with someone who is already is in other team.
    Team t2(&c11);
    CHECK_THROWS(t1.add(&c1));//cant add someone is already is in other team.
    
}
TEST_CASE("Individual Actions..."){

    Point a(32.3,44),b(1.3,3.5);
    Cowboy c1("c1",b);
    OldNinja ON("OldNinja",Point(2.0,2.0));
    int dist = ON.distance(&c1);
    ON.move(&c1);
    CHECK(ON.distance(&c1)<dist);//because we moved thorward the enemy.
    ON.slash(&c1);
    CHECK(c1.isAlive()==true);//each slash of OldNinja is -40 HP

    c1.shoot(&ON);
    c1.shoot(&ON);
    c1.shoot(&ON);
    c1.shoot(&ON);
    c1.shoot(&ON);
    c1.shoot(&ON);
    CHECK(c1.getBullets() == 0);
    CHECK_NOTHROW(c1.shoot(&ON));//if there are no bullets left just reload and don't shoot.
    CHECK(c1.getBullets() == 6);
    //after 7 shots the ninja should have 150-70=80 HP
    CHECK(ON.isAlive()==true);
    c1.shoot(&ON);
    c1.shoot(&ON);
    c1.shoot(&ON);
    c1.shoot(&ON);
    c1.shoot(&ON);
    c1.shoot(&ON);
    c1.shoot(&ON);//reload
    c1.shoot(&ON);
    c1.shoot(&ON);
    CHECK(ON.isAlive()==false);
    CHECK_THROWS(c1.shoot(&c1));//cant hurt myself
    CHECK_THROWS(ON.slash(&ON));//same.

}
TEST_CASE("Team Actions..."){

    Point a(32.3,44);
    Cowboy c1("c1",a);
    OldNinja ON("OldNinja",Point(2.0,2.0));
    YoungNinja YN("YoungNinja",Point(3.0,3.0));
    TrainedNinja TN("Trainedinja",Point(4.0,4.0));
    Team t1(&c1);
    Team t2(&ON);
    t1.add(&YN);
    t2.add(&TN);
    CHECK(t1.stillAlive() == 2);
    CHECK(t2.stillAlive() == 2);
    CHECK_NOTHROW(t1.attack(&t2));
    CHECK_NOTHROW(t2.attack(&t1));
    CHECK_THROWS(t1.attack(&t1));//cant attack myself.
    CHECK_THROWS(t2.attack(&t2));//cant attack myself.



}