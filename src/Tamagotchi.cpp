#include "../include/Tamagotchi.hpp"
#include "../include/Log.hpp"
#include "../include/Game1.hpp"
#include "../include/Game2.hpp"
#include <cstdlib> // For rand()
#include <iostream>

Tamagotchi::Tamagotchi(const std::string& name) : Tier(name), gesundheit(1) {}  // Initialize using base and derived attributes

void Tamagotchi::warten() {
    // std::cout << "Tamagotchi::warten called." << std::endl; // debugging
    // Increment age and hunger, capped at 5
    alter = std::min(5, alter + 1);
    hunger = std::min(5, hunger + 1);

    // Random boredom increment(1 or 0), capped at 5
    langeweile = std::min(5, langeweile + (std::rand() % 2));
    
    // If hunger > 3, random health decrement
    if (hunger > 3 && gesundheit > 1) {
        gesundheit = std::min(3, gesundheit - (std::rand() % 2)); // Decrement by 0 or 1
    }

    // Log the action
    log.add_log("Warten Aktion durchgefuehrt.");
}

void Tamagotchi::fuettern() {
    // Reset hunger to 1
    hunger = 1;

    // Log the action
    log.add_log("Tamagotchi gefuettert.");
}

void Tamagotchi::displayMiniGameMenu() {
    std::cout << "Waehl ein Spiel:" << std::endl << "1. Rock, Paper, Scissors" << std::endl << "2. Links oder Rechts: \n";
    int choice;
    std::cin >> choice;

    if (choice == 1) {
        Game1 game1;
        game1.playGame(this->get_name());
    } else if (choice == 2) {
        Game2 game2;
        game2.playGame(this->get_name());
    } else {
        std::cout << "Ungueltige Wahl. Mini-Spiel wird beendet.\n";
        log.add_log("Ungueltige Spielwahl, Mini-Spiel beendet.");
        return;
    }
}

void Tamagotchi::spielen() {
    // Reset boredom to 1
    langeweile = 1;

    // Increase hunger, cap at 5
    hunger = std::min(5, hunger + 1);

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
        log.add_log("Tamagotchi unnoetige Medizin gegeben: Gesundheit reduziert.");
    }
}

void Tamagotchi::logbuch() {
    log.get_logbuch();
}
