#include "../include/Gudetama.hpp"
#include "../include/Tier.hpp"
#include "../include/Game1.hpp"
#include "../include/Game2.hpp"
#include <algorithm>
#include <iostream>


Gudetama::Gudetama(const std::string& name) : Tier(name) {}

void Gudetama::fuettern() {
    // Set hunger to 1 as per specification
    hunger = 1;
    log.add_log("Gudetama gefüttert.");
}

void Gudetama::playMiniGame() {
    std::cout << "Choose a game (1 or 2): ";
    int choice;
    std::cin >> choice;

    if (choice == 1) {
        Game1 game1;
        game1.playGame(this->get_name());
    } else {
        Game2 game2;
        game2.playGame(this->get_name());
    }
}

void Gudetama::spielen() {
    // Improve boredom by 1 point
    langeweile = std::max(0, langeweile - 1);
    log.add_log("Mit Gudetama gespielt.");

}

void Gudetama::warten() {
    alter += 1;
    hunger = std::min(5, hunger + 1);;
    langeweile = std::min(5, langeweile + (std::rand() % 2));
    log.add_log("Wait action performed.");
}

void Gudetama::logbuch() {
    log.get_logbuch();
}