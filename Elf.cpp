//elf.cpp
#include "Elf.h"
#include <iostream>

namespace cs_creature {
    Elf::Elf() : Creature() {}

    Elf::Elf(int newStrength, int newHitpoints)
        : Creature(newStrength, newHitpoints) {}

    std::string Elf::getSpecies() const {
        return "elf";
    }

    int Elf::getDamage() const {
        int damage = Creature::getDamage();
        if (rand() % 10 == 0) {
            damage *= 2;
            std::cout << "Magical attack inflicts " << damage << " additional damage points!" << std::endl;
        }
        return damage;
    }
}