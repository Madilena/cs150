#ifndef OGRE_H
#define OGRE_H

#include "Alien.h"
#include <iostream>
using namespace std;

class Ogre : public Alien {
    private:

    public:
        Ogre(int health, string name) : Alien(health, name, 50){};
};

#endif
