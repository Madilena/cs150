#include "Ogre.h"
using namespace std;

class Ogre : public Alien {

    Ogre::Ogre() : Ogre(100, "") {}

    //full constructor
    Ogre::Ogre(int health, string name) {
        this->health = health;
        this->name = name;
    }
}


