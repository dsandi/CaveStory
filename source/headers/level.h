//
// Created by Danny Javier Sandi on 10/21/15.
//

#ifndef CAVESTORY_LEVEL_H
#define CAVESTORY_LEVEL_H

#include <string>
#include "globals.h"

class Graphics;
struct SDL_Texture;

class Level{
public:
    Level();
    Level(std::string mapName, Vector2 spawnPoint, Graphics &graphics);
    ~Level();
    void update(int elapsedTime);
    void draw(Graphics &graphics);
private:
    std::string _mapName;
    Vector2 _spawnPoint;
    Vector2 _size;
    SDL_Texture* _backgroundTexture;

    void loadMap(std::string mapName, Graphics &graphics);
};
#endif //CAVESTORY_LEVEL_H
