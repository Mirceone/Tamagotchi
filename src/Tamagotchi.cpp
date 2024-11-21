#include "tamagotchi.hpp"
#include <algorithm>
#include <cstdlib> // For rand()

Tamagotchi::Tamagotchi(const std::string& name) : Tier(name) {
    hunger = 1;
    gesundheit = 3;
    langeweile = 0;
    alter = 0;
    // Optional: Initialize logbook
    logbuch.push_back("Tamagotchi created.");
}

void Tamagotchi::waitAction() {
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
    logbuch.push_back("Wait action performed.");
}

void Tamagotchi::feed() {
    // Reset hunger to 1
    hunger = 1;

    // Log the action
    logbuch.push_back("Tamagotchi fed.");
}

void Tamagotchi::play() {
    // Reset boredom to 1
    langeweile = 1;

    // Increase hunger
    hunger += 1;

    // Log the action
    logbuch.push_back("Tamagotchi played with.");
}

void Tamagotchi::medicate() {
    if (gesundheit == 1) {
        // Set health to 3 (side effects!)
        gesundheit = 3;
        logbuch.push_back("Tamagotchi given medicine: health restored, side effects!");
    } else {
        // Decrease health by 2, minimum value 1
        gesundheit = std::max(1, gesundheit - 2);
        logbuch.push_back("Tamagotchi given unnecessary medicine: health reduced.");
    }
}
