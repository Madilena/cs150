#include <iostream>
#include "Alien.h"
#include "AlienPack.h"
#include "Snake.h"


int calculateDamage(Alien* alienArray, int count); 


int main() {
    std::cout << "Hello World!\n";
    AlienPack alienPack;
//    Alien snake(AlienType::SNAKE, 100, "Snake");
    Snake snake(100, "Snake");

//    Alien ogre(AlienType::OGRE, 100, "Ogre");
//    Ogre ogre(100, "Ogre");
//    Alien marshallow(AlienType::MARSHMALLOW_MAN, 100, "marshmallow");
//    MarshmallowMan marshmallow(100, "marshmallow");


    alienPack.addAlien(snake, 0);
//   alienPack.addAlien(ogre, 1);
//   alienPack.addAlien(marshmallow, 2);

    cout << "Alien count: " << alienPack.getAlienCount() << endl;

    int totalDamage = calculateDamage(alienPack.getAliens(), alienPack.getAlienCount());
    cout << "Damage: " << totalDamage << endl;
}

int calculateDamage(Alien* alienArray, int count) {
    int damage = 0;

    for(int i = 0; i < count; i++) {
        damage += (*(alienArray + i)).getDamage();
    }

    return damage;
}
