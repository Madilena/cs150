#include "MarshmallowMan.h"
using namespace std;

class MarshmallowMan : public Alien {

    MarshmallowMan::MarshmallowMan() : MarshmallowMan(100, "") {}

    //full constructor
    MarshmallowMan::MarshmallowMan(int health, string name) {
        this->health = health;
        this->name = name;
    }
}


