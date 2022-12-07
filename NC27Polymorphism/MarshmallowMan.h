#ifndef MARSHMALLOWMAN_H
#define MARSHMALLOWMAN_H

#include <iostream>
#include "Alien.h"

using namespace std;

class MarshmallowMan : public Alien {
private:
    int battery;

public:
    MarshmallowMan(int battery, int health, string name) : Alien(health, name, 10) {
        this->battery = battery;
    };
    virtual int getDamage();
};

#endif
