#include "Alien.h"
using namespace std;

//no arg default constructor
Alien::Alien() {
    this->type = AlienType::SNAKE;
    health = 100;
    name = "";
}

//full constructor
Alien::Alien(AlienType type, int health, string name) {
    this->type = type;
    this->health = health;
    this->name = name;
}

AlienType Alien::getAlienType() {
    return type;
}