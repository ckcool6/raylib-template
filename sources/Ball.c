#include "Ball.h"
#include <stdlib.h>
#include "raylib.h"

int ball_init(Ball* this) {
    this->position.x = GetScreenWidth()/2.0f;
    this->position.y = GetScreenHeight()/2.0f;
    this->speed.x = 5.0f;
    this->speed.y = 4.0f;
    this->radius = 50;
    
    return 0;
}

void ball_draw(Ball* this) {

    // drawing
    DrawCircleV(this->position, this->radius, BLUE);
}

