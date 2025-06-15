#include <stdio.h>
#include "game.h"
#include "snake.h"
#include "utils.h"

int main() {
    // Initialize the game
    Game game;
    initGame(&game);

    // Game loop
    while (game.isRunning) {
        handleInput(&game);
        updateGame(&game);
        renderGame(&game);
    }

    // Clean up and exit
    endGame(&game);
    return 0;
}