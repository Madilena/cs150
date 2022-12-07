#include <iostream>
#include "AlienPack.h"
#include "Alien.h"

//calculates the damage of the alien pack
int calculateDamage(Alien* alienArray, int count);

int main() {
    std::cout << "Hello World!\n";
    AlienPack alienPack;
    Alien snake(AlienType::SNAKE, 100, "Snake");
    Alien ogre(AlienType::OGRE, 100, "Ogre");
    Alien marshallow(AlienType::MARSHMALLOW_MAN, 100, "marshmallow");

    alienPack.addAlien(snake, 0);
    alienPack.addAlien(ogre, 1);
    alienPack.addAlien(marshallow, 2);

    cout << "Alien count: " << alienPack.getAlienCount() << endl;

    int totalDamage = calculateDamage(alienPack.getAliens(),
        alienPack.getAlienCount());
    cout << "Damage: " << totalDamage << endl;
}

int calculateDamage(Alien* alienArray, int count) {
    int damage = 0;
    
    for(int i = 0; i < count; i++) {
        if ((*(alienArray + i)).getAlienType() == AlienType::SNAKE)  {
            damage += 10;
        } else if ((*(alienArray + i)).getAlienType() == AlienType::OGRE) {
            damage += 3;
        } else if ((*(alienArray + i)).getAlienType() == AlienType::MARSHMALLOW_MAN) {
            damage += 1;
        }
    }
    
    return damage;
}