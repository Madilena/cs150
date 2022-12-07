#ifndef ALIEN_H
#define ALIEN_H

#include <iostream>
using namespace std;

class Alien {
    private:
        int health; //0=dead, 100=full health
        string name;

    public:
        Alien();
        Alien(int health, string name, int damage);
        int getHealth();
        string getName();
        virtual int getDamage() = 0;
};

#endif
