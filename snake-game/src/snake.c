#include <stdio.h>
#include "snake.h"

void init_snake(Snake *snake, int start_x, int start_y) {
    snake->body[0].x = start_x;
    snake->body[0].y = start_y;
    snake->length = 1;
    snake->direction = RIGHT; // Assuming RIGHT is defined in snake.h
}

void move_snake(Snake *snake) {
    // Move the snake's body
    for (int i = snake->length - 1; i > 0; i--) {
        snake->body[i] = snake->body[i - 1];
    }

    // Update the head position based on the current direction
    switch (snake->direction) {
        case UP:
            snake->body[0].y--;
            break;
        case DOWN:
            snake->body[0].y++;
            break;
        case LEFT:
            snake->body[0].x--;
            break;
        case RIGHT:
            snake->body[0].x++;
            break;
    }
}

void grow_snake(Snake *snake) {
    if (snake->length < MAX_SNAKE_LENGTH) { // Assuming MAX_SNAKE_LENGTH is defined in snake.h
        snake->length++;
    }
}

int check_collision(Snake *snake) {
    // Check for collision with walls
    if (snake->body[0].x < 0 || snake->body[0].x >= BOARD_WIDTH || // Assuming BOARD_WIDTH is defined
        snake->body[0].y < 0 || snake->body[0].y >= BOARD_HEIGHT) { // Assuming BOARD_HEIGHT is defined
        return 1; // Collision with wall
    }

    // Check for collision with itself
    for (int i = 1; i < snake->length; i++) {
        if (snake->body[0].x == snake->body[i].x && snake->body[0].y == snake->body[i].y) {
            return 1; // Collision with itself
        }
    }

    return 0; // No collision
}