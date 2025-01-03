#include <iostream>
#include "../include/RunMainGame.hpp"

int main() {
    srand(time(0)); // Initialize random seed once at the start of the program
    RunMainGame run_main_game;
    run_main_game.run();

    return 0;
}