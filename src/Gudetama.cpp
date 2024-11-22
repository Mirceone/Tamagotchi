#include "gudetama.hpp"
#include "tier.hpp"
#include <algorithm>


Gudetama::Gudetama(const std::string& name) : Tier(name) {
    hunger = 1;
    langeweile = 0;
    alter = 0;
}

void Gudetama::fuettern() {
    // Set hunger to 1 as per specification
    hunger = 1;
    log.add_log("Gudetama gefüttert.");
}

void Gudetama::spielen() {
    // Improve boredom by 1 point
    langeweile = std::max(0, langeweile - 1);
    log.add_log("Mit Gudetama gespielt.");
}

void Gudetama::warten() {
    alter += 1;
    hunger += 1;
    langeweile += (std::rand() % 2); // Increment by 0 or 1 randomly
    log.add_log("Wait action performed.");
}

void Gudetama::logbuch() {
    log.get_logbuch();
}