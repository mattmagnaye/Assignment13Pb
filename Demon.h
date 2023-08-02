//demon.h
#ifndef DEMON_H
#define DEMON_H

#include "Creature.h"

namespace cs_creature {
    class Demon : public Creature {
    public:
        Demon();
        Demon(int newStrength, int newHitpoints);

        virtual std::string getSpecies() const;
        virtual int getDamage() const;
    };
}

#endif