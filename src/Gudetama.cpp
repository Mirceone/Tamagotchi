#include "gudetama.hpp"
#include <algorithm>

Gudetama::Gudetama(const std::string& name) : Tier(name) {
    hunger = 1;
    langeweile = 0;
    alter = 0;
}

void Gudetama::feed() {
    hunger = std::min(100, hunger + 15);   
}

void Gudetama::play() {
    langeweile = std::max(0, langeweile - 10);
}

void Gudetama::sleep() {
    gesundheit = std::min(100, gesundheit + 5);
}
