#ifndef HUMAN_H
#define HUMAN_H

#include "Creature.h"

namespace cs_creature {
    class Human : public Creature {
    public:
        Human();
        Human(int newStrength, int newHitpoints);

        virtual std::string getSpecies() const;
        virtual int getDamage() const;
    };
}

#endif // HUMAN_H
