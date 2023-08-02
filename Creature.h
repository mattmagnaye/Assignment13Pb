//creature.h
#ifndef CREATURE_H
#define CREATURE_H

#include <string>

namespace cs_creature {

    class Creature {
    private:
        int strength;
        int hitpoints;
        static int defaultStrength;
        static int defaultHitpoints;

    public:
        Creature();
        Creature(int newStrength, int newHitpoints);
        virtual int getDamage() const;
        int getStrength() const;
        int getHitpoints() const;
        void setStrength(int newStrength);
        void setHitpoints(int newHitpoints);
        static void setDefaultStrength(int newDefaultStrength);
        static void setDefaultHitpoints(int newDefaultHitpoints);
        static int getDefaultStrength();
        static int getDefaultHitpoints();
        virtual std::string getSpecies() const = 0;
    };

}  // namespace cs_creature

#endif // CREATURE_H