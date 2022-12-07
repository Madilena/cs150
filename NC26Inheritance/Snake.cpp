#include "Snake.h"
using namespace std;

class Snake : public Alien {

    Snake::Snake() : Snake(100, "") {}

    //full constructor
    Snake::Snake(int health, string name) {
        this->health = health;
        this->name = name;
    }
}


