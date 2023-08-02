//demon.cpp
#include "Demon.h"
#include <iostream>

namespace cs_creature {
    Demon::Demon() : Creature() {}

    Demon::Demon(int newStrength, int newHitpoints)
        : Creature(newStrength, newHitpoints) {}

    std::string Demon::getSpecies() const {
        return "demon";
    }

    int Demon::getDamage() const {
        int damage = Creature::getDamage();
        if (rand() % 4 == 0) {
            damage += 50;
            std::cout << "Demonic attack inflicts 50 additional damage points!" << std::endl;
        }
        return damage;
    }
}