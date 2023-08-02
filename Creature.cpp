#include "Creature.h"
#include <iostream>
#include <cstdlib>

namespace cs_creature {

    int Creature::defaultStrength = 10;
    int Creature::defaultHitpoints = 10;

    // Default constructor
    Creature::Creature() : strength(defaultStrength), hitpoints(defaultHitpoints) {}

    // Constructor with parameters
    Creature::Creature(int newStrength, int newHitpoints) : strength(newStrength), hitpoints(newHitpoints) {}

    // Getters and setters
    int Creature::getStrength() const {
        return strength;
    }

    int Creature::getHitpoints() const {
        return hitpoints;
    }

    void Creature::setStrength(int newStrength) {
        strength = newStrength;
    }

    void Creature::setHitpoints(int newHitpoints) {
        hitpoints = newHitpoints;
    }

    // Get random damage value based on creature's strength
    int Creature::getDamage() const {
        int damage = (rand() % strength) + 1;
        std::cout << "The " << getSpecies() << " attacks for " << damage << " points!" << std::endl;
        return damage;
    }

    // Static member functions to set default values
    void Creature::setDefaultStrength(int newDefaultStrength) {
        defaultStrength = newDefaultStrength;
    }

    void Creature::setDefaultHitpoints(int newDefaultHitpoints) {
        defaultHitpoints = newDefaultHitpoints;
    }

}  // namespace cs_creature
