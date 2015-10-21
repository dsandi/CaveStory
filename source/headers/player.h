//
// Created by Danny Javier Sandi on 10/20/15.
//

#ifndef CAVESTORY_PLAYER_H
#define CAVESTORY_PLAYER_H

#include "animated_sprite.h"
#include "globals.h"


class Graphics;

class Player : public AnimatedSprite {
public:
    Player();
    Player(Graphics &graphics, float x, float y);
    void draw(Graphics &graphics);
    void update(float elapsedTime);

    /* void moveLeft
     * Moves the player left by -dx
     */
    void moveLeft();

    /* void moveRight
     * Moves the player right by dx
     */
    void moveRight();

    /* void stopMoving
     * Stops moving the player
     */
    void stopMoving();

    virtual void animationDone(std::string currentAnimation);
    virtual void setupAnimations();
private:
    float _dx, _dy;

    Direction _facing;
};

#endif //CAVESTORY_PLAYER_H
