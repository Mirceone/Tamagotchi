#include "../include/Tamagotchi.hpp"
#include "../include/Log.hpp"
#include <cstdlib> // For rand()
#include <iostream>

Tamagotchi::Tamagotchi(const std::string& name) : Tier(name), gesundheit(3) {}  // Initialize using base and derived attributes

void Tamagotchi::warten() {
    // std::cout << "Tamagotchi::warten called." << std::endl; // debugging
    // Increment age and hunger
    alter += 1;
    hunger += 1;

    // Random boredom increment
    langeweile += (std::rand() % 2); // Increment by 0 or 1 randomly

    // If hunger > 3, random health decrement
    if (hunger > 3 && gesundheit > 1) {
        gesundheit = std::min(3, gesundheit - (std::rand() % 2)); // Decrement by 0 or 1
    }

    // Log the action
    log.add_log("Warten Aktion durchgeführt.");
}

void Tamagotchi::fuettern() {
    // Reset hunger to 1
    hunger = 1;

    // Log the action
    log.add_log("Tamagotchi gefüttert.");
}

void Tamagotchi::spielen() {
    // Reset boredom to 1
    langeweile = 1;

    // Increase hunger
    hunger += 1;

    // Log the action
    log.add_log("Mit Tamagotchi gespielt.");
}

void Tamagotchi::medikamentGeben() {
    if (gesundheit == 1) {
        // Set health to 3 (side effects!)
        gesundheit = 3;
        log.add_log("Tamagotchi Medizin gegeben: Gesundheit wiederhergestellt, Nebenwirkungen!");
    } else {
        // Decrease health by 2, minimum value 1
        gesundheit = std::max(1, gesundheit - 2);
        log.add_log("Tamagotchi unnötige Medizin gegeben: Gesundheit reduziert.");
    }
}

void Tamagotchi::logbuch() {
    log.get_logbuch();
}