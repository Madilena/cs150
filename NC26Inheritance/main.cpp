#include <iostream>
#include "Alien.h"
#include "AlienPack.h"
#include "Snake.h"
#include "Ogre.h"
#include "MarshmallowMan.h"


int calculateDamage(Alien* alienArray, int count);


int main() {
    std::cout << "Alien Pack 1\n";
    AlienPack alienPack;
    Snake snake(100, "Snake");
    Ogre ogre(100, "Ogre");
    MarshmallowMan marshmallow(100, "marshmallow");


    alienPack.addAlien(snake, 0);
    alienPack.addAlien(ogre, 1);
    alienPack.addAlien(marshmallow, 2);

    cout << "Alien count: " << alienPack.getAlienCount() << endl;

    int totalDamage = calculateDamage(alienPack.getAliens(), alienPack.getAlienCount());
    cout << "Damage: " << totalDamage << endl;

    std::cout << "\nAlien Pack 2\n";
    AlienPack alienPackTwo;
    Snake snakee(100, "Snake");
    Snake snakeTwo(50, "SnakeTwo");
    Ogre ogree(100, "Ogre");
    MarshmallowMan marshmallowe(100, "marshmallow");
    MarshmallowMan marshmallowTwo(50, "marshmallowTwo");
    MarshmallowMan marshmallowThree(70, "marshmallowThree");


    alienPackTwo.addAlien(snakee, 0);
    alienPackTwo.addAlien(snakeTwo, 1);
    alienPackTwo.addAlien(ogree, 2);
    alienPackTwo.addAlien(marshmallowe, 3);
    alienPackTwo.addAlien(marshmallowTwo, 4);
    alienPackTwo.addAlien(marshmallowThree, 5);

    cout << "Alien count: " << alienPackTwo.getAlienCount() << endl;

    int totalDamageTwo = calculateDamage(alienPackTwo.getAliens(), alienPackTwo.getAlienCount());
    cout << "Damage: " << totalDamageTwo << endl;

}

int calculateDamage(Alien* alienArray, int count) {
    int damage = 0;

    for(int i = 0; i < count; i++) {
        damage += (*(alienArray + i)).getDamage();
    }

    return damage;
}
