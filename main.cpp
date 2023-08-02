#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Creature.h"
#include "Human.h"
#include "Elf.h"
#include "Balrog.h"
#include "Cyberdemon.h"

using namespace std;
using namespace cs_creature;

const int NUM_CREATURES = 4;
const int ELF_DEFAULT_STRENGTH = 24;
const int BALROG_DEFAULT_STRENGTH = 10;
const int HUMAN_DEFAULT_STRENGTH = 100;
const int CYBERDEMON_DEFAULT_STRENGTH = 50;
const int DEFAULT_HITPOINTS = 50;
const int MIN_DAMAGE = 1;
const int MAX_DAMAGE = 50;

// Function to generate random damage within a specified range
int generateRandomDamage() {
    return rand() % (MAX_DAMAGE - MIN_DAMAGE + 1) + MIN_DAMAGE;
}

// Function to simulate a battle between two creatures
void battle(Creature& Creature1, Creature& Creature2) {
    cout << "*****  Battle between the " << Creature1.getSpecies() << " and the " << Creature2.getSpecies() << "!!  ******" << endl << endl;

    int round = 1;
    while (Creature1.getHitpoints() > 0 && Creature2.getHitpoints() > 0) {
        // Calculate damage done by Creature1 and update Creature2's hitpoints
        int damage1 = generateRandomDamage();
        Creature2.setHitpoints(Creature2.getHitpoints() - damage1);

        // Check if Creature2 is still alive before its turn
        if (Creature2.getHitpoints() <= 0) break;

        // Calculate damage done by Creature2 and update Creature1's hitpoints
        int damage2 = generateRandomDamage();
        Creature1.setHitpoints(Creature1.getHitpoints() - damage2);

        // Output the attack information for Creature1
        cout << "The " << Creature1.getSpecies() << " attacks for " << damage1 << " points!" << endl;

        if (damage1 > 0 && Creature1.getSpecies() == "Balrog") {
            int damageSpeedAttack = generateRandomDamage();
            Creature2.setHitpoints(Creature2.getHitpoints() - damageSpeedAttack);
            cout << "Balrog speed attack inflicts " << damageSpeedAttack << " additional damage points!" << endl;
        } else if (damage1 > 0 && Creature1.getSpecies() == "Elf") {
            cout << "Magical attack inflicts " << damage1 << " additional damage points!" << endl;
        } else if (damage1 > 0 && Creature1.getSpecies() == "Cyberdemon") {
            cout << "Demonic attack inflicts " << damage1 << " additional damage points!" << endl;
        }

        // Output the attack information for Creature2
        cout << "The " << Creature2.getSpecies() << " attacks for " << damage2 << " points!" << endl;

        if (damage2 > 0 && Creature2.getSpecies() == "Balrog") {
            int damageSpeedAttack = generateRandomDamage();
            Creature1.setHitpoints(Creature1.getHitpoints() - damageSpeedAttack);
            cout << "Balrog speed attack inflicts " << damageSpeedAttack << " additional damage points!" << endl;
        } else if (damage2 > 0 && Creature2.getSpecies() == "Elf") {
            cout << "Magical attack inflicts " << damage2 << " additional damage points!" << endl;
        } else if (damage2 > 0 && Creature2.getSpecies() == "Cyberdemon") {
            cout << "Demonic attack inflicts " << damage2 << " additional damage points!" << endl;
        }

        // Output remaining hitpoints after the attack
        cout << "The " << Creature1.getSpecies() << " has " << Creature1.getHitpoints() << " hitpoints." << endl;
        cout << "The " << Creature2.getSpecies() << " has " << Creature2.getHitpoints() << " hitpoints." << endl << endl;

        round++;
    }

    // Output the result of the battle
    if (Creature1.getHitpoints() <= 0 && Creature2.getHitpoints() <= 0) {
        cout << "The battle results in a tie!" << endl << endl;
    } else if (Creature1.getHitpoints() <= 0) {
        cout << "The " << Creature2.getSpecies() << " wins!" << endl << endl;
    } else {
        cout << "The " << Creature1.getSpecies() << " wins!" << endl << endl;
    }
}

// Function to simulate the battle between the balrog and the elf
void battleBalrogVsElf() {
    Balrog balrog(BALROG_DEFAULT_STRENGTH, DEFAULT_HITPOINTS);
    Elf elf(ELF_DEFAULT_STRENGTH, DEFAULT_HITPOINTS);
    battle(balrog, elf);
}

// Function to simulate the battle between the balrog and the cyberdemon
void battleBalrogVsCyberdemon() {
    Balrog balrog(BALROG_DEFAULT_STRENGTH, DEFAULT_HITPOINTS);
    Cyberdemon cyberdemon(CYBERDEMON_DEFAULT_STRENGTH, DEFAULT_HITPOINTS);
    battle(balrog, cyberdemon);
}

// Function to simulate the battle between the balrog and the human
void battleBalrogVsHuman() {
    Balrog balrog(BALROG_DEFAULT_STRENGTH, DEFAULT_HITPOINTS);
    Human human(HUMAN_DEFAULT_STRENGTH, DEFAULT_HITPOINTS);
    battle(balrog, human);
}

// Function to simulate the battle between the elf and the cyberdemon
void battleElfVsCyberdemon() {
    Elf elf(ELF_DEFAULT_STRENGTH, DEFAULT_HITPOINTS);
    Cyberdemon cyberdemon(CYBERDEMON_DEFAULT_STRENGTH, DEFAULT_HITPOINTS);
    battle(elf, cyberdemon);
}

// Function to simulate the battle between the elf and the human
void battleElfVsHuman() {
    Elf elf(ELF_DEFAULT_STRENGTH, DEFAULT_HITPOINTS);
    Human human(HUMAN_DEFAULT_STRENGTH, DEFAULT_HITPOINTS);
    battle(elf, human);
}

// Function to simulate the battle between the cyberdemon and the human
void battleCyberdemonVsHuman() {
    Cyberdemon cyberdemon(CYBERDEMON_DEFAULT_STRENGTH, DEFAULT_HITPOINTS);
    Human human(HUMAN_DEFAULT_STRENGTH, DEFAULT_HITPOINTS);
    battle(cyberdemon, human);
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    // Simulate battles
    battleBalrogVsElf();
    battleBalrogVsCyberdemon();
    battleBalrogVsHuman();
    battleElfVsCyberdemon();
    battleElfVsHuman();
    battleCyberdemonVsHuman();

    return 0;
}
