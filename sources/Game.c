//
// Created by Administrator on 2026/1/13.
//

#include "Game.h"

#include "Ball.h"
#include "raylib.h"
#include "stdlib.h"
#include "include/raylib.h"

int game_init(Game *this)
{
    this->screenWidth = 800;
    this->screenheight = 600;
    this->title = "this is a game";
    this->pause = false;

    SetConfigFlags(FLAG_MSAA_4X_HINT);
    InitWindow(this->screenWidth, this->screenheight, this->title);

    return 0;
}

void game_update(Game *this, Ball *ball)
{
    if (!this->pause)
    {
        ball->position.x += ball->speed.x;
        ball->position.y += ball->speed.y;

        // Check walls collision for bouncing
        if ((ball->position.x >= (GetScreenWidth() - ball->radius)) || (ball->position.x <= ball->radius))
        {
            ball->speed.x *= -1.0f;
        }
        if ((ball->position.y >= (GetScreenHeight() - ball->radius)) || (ball->position.y <= ball->radius))
        {
            ball->speed.y *= -1.0f;
        }
    }

}

void game_draw(Ball *ball)
{
    BeginDrawing();
    ClearBackground(RAYWHITE);

    ball_draw(ball);

    DrawText("PRESS SPACE to PAUSE BALL MOVEMENT", 10, GetScreenHeight() - 25, 20, LIGHTGRAY);

    DrawFPS(10, 10);
    EndDrawing();
}

void game_run(Game *this, Ball *ball)
{
    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        game_update(this, ball);

        //
        if (IsKeyPressed(KEY_SPACE))
        {
            this->pause = !(this->pause);
        }

        game_draw(ball);

        //
        if (this->pause)
            DrawText("PAUSED", 350, 200, 30, GRAY);
    }

    CloseWindow();
}
