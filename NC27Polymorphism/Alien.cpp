#include "Alien.h"
using namespace std;

//no arg default constructor
Alien::Alien() {
    health = 100;
    name = "";
}

//full constructor
Alien::Alien(int health, string name, int damage) {
    this->health = health;
    this->name = name;
}


