//
// Created by Danny Javier Sandi on 11/8/15.
//

#ifndef CAVESTORY_TILE_H
#define CAVESTORY_TILE_H
#include <SDL.h>
#include "globals.h"

struct SDL_Texture;
class Graphics;

class Tile{
public:
    Tile();
    Tile(SDL_Texture* tileset, Vector2 size, Vector2 tilesetPosition, Vector2 position);
    void update(int elapsedTime);
    void draw(Graphics &graphics);
private:
    SDL_Texture* _tileset;
    Vector2 _size;
    Vector2 _tilesetPosition;
    Vector2 _position;
};
#endif //CAVESTORY_TILE_H
