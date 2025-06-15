#ifndef SNAKE_H
#define SNAKE_H

typedef struct SnakeSegment {
    int x;
    int y;
    struct SnakeSegment* next;
} SnakeSegment;

typedef struct Snake {
    SnakeSegment* head;
    int length;
} Snake;

void initSnake(Snake* snake);
void moveSnake(Snake* snake, int direction);
void growSnake(Snake* snake);
int checkCollision(Snake* snake, int x, int y);
void freeSnake(Snake* snake);

#endif // SNAKE_H