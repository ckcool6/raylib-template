#include "Game.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {

    //Game game;
    Game* game = malloc(sizeof(Game));
    Ball* ball = malloc(sizeof(Ball));
    //Ball ball;

    game_init(game);
    ball_init(ball);
    
    game_run(game,ball);

    free(game);
    free(ball);
    
    return 0;
}
