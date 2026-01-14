#pragma once

#include <stdbool.h>

#include "Ball.h"

typedef struct
{
    int screenWidth;
    int screenheight;
    char *title;
    bool pause;
} Game;

int game_init(Game *);
void game_update(Game *, Ball *);
void game_draw(Ball *);
void game_run(Game *, Ball*);