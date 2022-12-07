#ifndef SNAKE_H
#define SNAKE_H

#include <iostream>
#include "Alien.h"

using namespace std;

class Snake : public Alien {
private:
    int battery;

public:
    Snake(int battery, int health, string name) : Alien(health, name, 10) {
        this->battery = battery;
    };
    virtual int getDamage();
};

#endif
