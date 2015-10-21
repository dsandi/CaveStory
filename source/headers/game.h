//
// Created by Danny Javier Sandi on 10/19/15.
//

#ifndef CAVESTORY_GAME_H
#define CAVESTORY_GAME_H

#include "player.h"

class Graphics;

class Game{
public:
    Game();
    ~Game();
private:
    void gameLoop();
    void draw(Graphics &graphics);
    void update(float elapsedTime);

    Player _player;
};
#endif //CAVESTORY_GAME_H
