#include <iostream>
#include "Alien.h"
#include "AlienPack.h"
#include "Snake.h"
#include "Ogre.h"
#include "MarshmallowMan.h"

int main() {
    std::cout << "\nAlien Pack 1\n";
    AlienPack alienPack;
    Snake *snake = new Snake(100, 100, "Snake");
    Ogre *ogre = new Ogre(100, 100, "Ogre");
    MarshmallowMan *marshmallow = new MarshmallowMan(100, 100, "marshmallow");

    alienPack.addAlien(snake, 0);
    alienPack.addAlien(ogre, 1);
    alienPack.addAlien(marshmallow, 2);

    cout << "Alien count: " << alienPack.getAlienCount() << endl;

    int totalDamage = alienPack.calculateDamage();
    cout << "Damage: " << totalDamage << endl;


    std::cout << "\nAlien Pack 2\n";
    AlienPack alienPack2;
    Snake *snake2 = new Snake(100, 100, "Snake");
    Snake *snake2Two = new Snake(100, 100, "Snake2");
    Ogre *ogre2 = new Ogre(100, 100, "Ogre");
    MarshmallowMan *marshmallow2 = new MarshmallowMan(100, 100, "marshmallow");
    MarshmallowMan *marshmallow2Two = new MarshmallowMan(100, 100, "marshmallow2");
    MarshmallowMan *marshmallow2Three = new MarshmallowMan(100, 100, "marshmallow3");

    alienPack2.addAlien(snake2, 0);
    alienPack2.addAlien(snake2Two, 1);
    alienPack2.addAlien(ogre2, 2);
    alienPack2.addAlien(marshmallow2, 3);
    alienPack2.addAlien(marshmallow2Two, 4);
    alienPack2.addAlien(marshmallow2Three, 5);

    cout << "Alien count: " << alienPack2.getAlienCount() << endl;

    int totalDamage2 = alienPack2.calculateDamage();
    cout << "Damage: " << totalDamage2 << endl;
}

