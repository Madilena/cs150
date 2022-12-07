#ifndef SNAKE_H
#define SNAKE_H

#include <iostream>
#include "Alien.h"

using namespace std;

class Snake : public Alien {
    private:

    public:
        Snake(int health, string name) : Alien(health, name, 10){};
};

#endif
