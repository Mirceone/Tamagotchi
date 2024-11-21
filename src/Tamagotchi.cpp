#include "tamagotchi.hpp"
#include <cstdlib> // For rand()

Tamagotchi::Tamagotchi(const std::string& name) {
    hunger = 1;
    gesundheit = 3;
    langeweile = 0;
    alter = 0;
    // Optional: Initialize logbook
    logbuch.push_back("Tamagotchi created.");
}

void Tamagotchi::warten() {
    // Increment age and hunger
    alter += 1;
    hunger += 1;

    // Random boredom increment
    langeweile += (std::rand() % 2); // Increment by 0 or 1 randomly

    // If hunger > 3, random health increment
    if (hunger > 3) {
        gesundheit = std::min(3, gesundheit + (std::rand() % 2)); // Increment by 0 or 1
    }

    // Log the action
    logbuch.push_back("Warten Aktion durchgeführt.");
}

void Tamagotchi::fuettern() {
    // Reset hunger to 1
    hunger = 1;

    // Log the action
    logbuch.push_back("Tamagotchi gefüttert.");
}

void Tamagotchi::spielen() {
    // Reset boredom to 1
    langeweile = 1;

    // Increase hunger
    hunger += 1;

    // Log the action
    logbuch.push_back("Mit Tamagotchi gespielt.");
}

void Tamagotchi::medikamentGeben() {
    if (gesundheit == 1) {
        // Set health to 3 (side effects!)
        gesundheit = 3;
        logbuch.push_back("Tamagotchi Medizin gegeben: Gesundheit wiederhergestellt, Nebenwirkungen!");
    } else {
        // Decrease health by 2, minimum value 1
        gesundheit = std::max(1, gesundheit - 2);
        logbuch.push_back("Tamagotchi unnötige Medizin gegeben: Gesundheit reduziert.");
    }
}
