#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void clear_screen() {
    // Clear the console screen
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int random_number(int min, int max) {
    return rand() % (max - min + 1) + min;
}

void initialize_random() {
    srand(time(NULL));
}