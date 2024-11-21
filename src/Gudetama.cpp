#include "gudetama.hpp"
#include <algorithm>

Gudetama::Gudetama(const std::string& name) : Tier(name) {
    hunger = 100;
    gesundheit = 100;  // Gudetama might start with a different health level
    langweiligkeit = 10;
    alter = 0;
}

void Gudetama::feed() {
    hunger = std::min(100, hunger + 15);   
}

void Gudetama::play() {
    langweiligkeit = std::max(0, langweiligkeit - 10);
}

void Gudetama::sleep() {
    gesundheit = std::min(100, gesundheit + 5);
}
