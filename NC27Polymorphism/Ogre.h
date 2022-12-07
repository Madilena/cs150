#ifndef OGRE_H
#define OGRE_H

#include <iostream>
#include "Alien.h"

using namespace std;

class Ogre : public Alien {
private:
    int battery;

public:
    Ogre(int battery, int health, string name) : Alien(health, name, 10) {
        this->battery = battery;
    };
    virtual int getDamage();
};

#endif
