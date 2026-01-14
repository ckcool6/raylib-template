#pragma once

#include "raylib.h"

typedef struct {
    Vector2 position;
    Vector2 speed;
    int radius;
} Ball;

int ball_init(Ball* this);
void ball_draw(Ball* this);
