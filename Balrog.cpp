//balrog.cpp
#include "Balrog.h"
#include <iostream>

namespace cs_creature {
    Balrog::Balrog() : Demon() {}

    Balrog::Balrog(int newStrength, int newHitpoints)
        : Demon(newStrength, newHitpoints) {}

    std::string Balrog::getSpecies() const {
        return "balrog";
    }

    int Balrog::getDamage() const {
        int damage = Demon::getDamage();
        int damage2 = (rand() % getStrength()) + 1;
        std::cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << std::endl;
        damage += damage2;
        return damage;
    }
}
