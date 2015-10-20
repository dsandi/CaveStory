//
// Created by Danny Javier Sandi on 10/19/15.
//

#ifndef CAVESTORY_ANIMATED_SPRITE_H
#define CAVESTORY_ANIMATED_SPRITE_H

#include "sprite.h"
#include <map>
#include <string>
#include "globals.h"
#include <vector>

class Graphics;

/*
 * Holds all the logic for animating sprites, extends from the sprite class
 * */

class AnimatedSprite : public Sprite{
public:
    AnimatedSprite();
    AnimatedSprite(Graphics &graphics, const std::string &filePath, int sourceX, int sourceY, int width, int height, float posX, float posY, float timeToUpdate);


    void playAnimation(std::string animation, bool once = false);

    void update(int elapsedTime);

    void draw(Graphics &graphics, int x, int y);

    virtual void setupAnimations();

protected:
    double _timeToUpdate;
    bool _currentAnimationOnce;
    std::string _currentAnimation;

    void addAnimation(int frames, int x, int y, std::string name, int width, int height, Vector2 offset);

    void resetAnimation();

    void stopAnimation();

    void setVisible(bool visible);

    virtual void animationDone(std::string currentAnimation);

private:
    std::map<std::string, std::vector<SDL_Rect> > _animations;
    std::map<std::string, Vector2   >_offsets;

    int _frameIndex;
    double _timeElapsed;
    bool _visible;
};
#endif //CAVESTORY_ANIMATED_SPRITE_H
