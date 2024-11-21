#include "gudetama.hpp"
#include <algorithm>

Gudetama::Gudetama(const std::string& name) : Tier(name) {
    hunger = 1;
    langeweile = 0;
    alter = 0;
}

void Gudetama::feed() {
    // Set hunger to 1 as per specification
    hunger = 1;
}

void Gudetama::play() {
    // Improve boredom by 1 point
    langeweile = std::max(0, langeweile - 1);
}
void Gudetama::waitAction() {
    alter += 1;
    hunger += 1;
    langeweile += (std::rand() % 2); // Increment by 0 or 1 randomly
    logbuch.push_back("Wait action performed.");
}
