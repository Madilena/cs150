#ifndef OGRE_H
#define OGRE_H

#include <iostream>
using namespace std;

class Ogre {
    private:
        int health; //0=dead, 100=full health
        string name;

    public:
        Ogre();
        Ogre(int health, string name);
        int getHealth();
        string getName();
};

#endif
