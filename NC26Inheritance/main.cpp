#include <iostream>
#include "AlienPack.h"
#include "Alien.h"

#include "Ogre.h"
#include "Snake.h"
#include "MarshmallowMan.h"

//calculates the damage of the alien pack
int calculateDamage(Alien* alienArray, int count);

int main() {
    std::cout << "Hello World!\n";
    AlienPack alienPack;
//    Alien snake(AlienType::SNAKE, 100, "Snake");
    Snake snake (100, "Snake");

//    Alien ogre(AlienType::OGRE, 100, "Ogre");
//    Ogre ogre(100, "Ogre");
//    Alien marshallow(AlienType::MARSHMALLOW_MAN, 100, "marshmallow");
//    MarshmallowMan marshmallow(100, "marshmallow");


    alienPack.addAlien(snake, 0);
 //   alienPack.addAlien(ogre, 1);
 //   alienPack.addAlien(marshmallow, 2);

    cout << "Alien count: " << alienPack.getAlienCount() << endl;

    int totalDamage = calculateDamage(alienPack.getAliens(),
                                      alienPack.getAlienCount());
    cout << "Damage: " << totalDamage << endl;
}

int calculateDamage(Alien* alienArray, int count) {
    int damage = 0;
    Snake snake;
    Ogre ogre;
    MarshmallowMan marshmallow;

    for(int i = 0; i < count; i++) {
        if (typeid(*(alienArray + i)) == typeid(snake))  {
            damage += 10;
        } else if (typeid(*(alienArray + i)) == typeid(ogre)) {
            damage += 3;
        } else if (typeid(*(alienArray + i)) == typeid(marshmallow)) {
            damage += 1;
        }
    }

    return damage;
}
