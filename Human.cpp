#include "Human.h"

namespace cs_creature {
    Human::Human() : Creature() {}

    Human::Human(int newStrength, int newHitpoints)
        : Creature(newStrength, newHitpoints) {}

    std::string Human::getSpecies() const {
        return "human";
    }

    int Human::getDamage() const {
        int damage = Creature::getDamage();
        return damage;
    }
}
