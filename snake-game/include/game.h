#ifndef GAME_H
#define GAME_H

typedef struct {
    int width;
    int height;
    int score;
    int gameOver;
} Game;

void initGame(Game *game, int width, int height);
void updateGame(Game *game);
void endGame(Game *game);

#endif // GAME_H