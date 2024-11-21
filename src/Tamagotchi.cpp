#include "tamagotchi.hpp"
#include <algorithm>

Tamagotchi::Tamagotchi(const std::string& name) : Tier(name) {
    hunger = 100;
    gesundheit = 100;
    langweiligkeit = 0;
    alter = 0;
}

void Tamagotchi::feed() {
    hunger = std::min(100, hunger + 20);
}

void Tamagotchi::play() {
    langweiligkeit = std::max(0, langweiligkeit - 20);
}

void Tamagotchi::sleep() {
    gesundheit = std::min(100, gesundheit + 10);
}
