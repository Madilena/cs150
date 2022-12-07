#ifndef MARSHMALLOWMAN_H
#define MARSHMALLOWMAN_H

#include <iostream>
#include "Alien.h"

using namespace std;

class MarshmallowMan : public Alien {
    private:

    public:
        MarshmallowMan(int health, string name) : Alien(health, name, 30){};
};

#endif
