# Snake Game

This is a simple implementation of the classic Snake game in C. The game allows players to control a snake that grows in length as it eats food, while avoiding collisions with itself and the walls.

## Project Structure

```
snake-game
├── src
│   ├── main.c        # Entry point of the game
│   ├── game.c        # Game logic implementation
│   ├── game.h        # Header file for game logic
│   ├── snake.c       # Snake behavior implementation
│   ├── snake.h       # Header file for snake behavior
│   └── utils.c       # Utility functions
├── Makefile          # Build instructions
└── README.md         # Project documentation
```

## Building the Game

To build the game, navigate to the project directory and run the following command:

```
make
```

This will compile the source files and create an executable.

## Running the Game

After building the project, you can run the game with the following command:

```
./snake-game
```

## Controls

- Use the arrow keys to control the direction of the snake.
- The objective is to eat the food that appears on the screen to grow the snake.
- Avoid colliding with the walls or the snake's own body.

## License

This project is open-source and available under the MIT License.