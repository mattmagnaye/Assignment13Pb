//cyberdemon.cpp
#include "Cyberdemon.h"

namespace cs_creature {
    Cyberdemon::Cyberdemon() : Demon() {}

    Cyberdemon::Cyberdemon(int newStrength, int newHitpoints)
        : Demon(newStrength, newHitpoints) {}

    std::string Cyberdemon::getSpecies() const {
        return "cyberdemon";
    }

    int Cyberdemon::getDamage() const {
        int damage = Demon::getDamage();
        return damage;
    }
}