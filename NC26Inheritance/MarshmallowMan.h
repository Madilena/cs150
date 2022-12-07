#ifndef MARSHMALLOWMAN_H
#define MARSHMALLOWMAN_H

#include <iostream>
using namespace std;

class MarshmallowMan {
    private:
        int health; //0=dead, 100=full health
        string name;

    public:
        MarshmallowMan();
        MarshmallowMan(int health, string name);
        int getHealth();
        string getName();
};

#endif
