//cyberdemon.h
#ifndef CYBERDEMON_H
#define CYBERDEMON_H

#include "Demon.h"

namespace cs_creature {
    class Cyberdemon : public Demon {
    public:
        Cyberdemon();
        Cyberdemon(int newStrength, int newHitpoints);

        virtual std::string getSpecies() const;
        virtual int getDamage() const;
    };
}

#endif