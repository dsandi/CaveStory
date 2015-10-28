//
// Created by Danny Javier Sandi on 10/14/15.
//

#ifndef CAVESTORY_GRAPHICS_H
#define CAVESTORY_GRAPHICS_H

#include <map>
#include <string>
#include "SDL.h"

/* Graphics Class
 * Handles everything related to graphics
 */


struct SDL_Window;
struct SDL_Renderer;

class Graphics {
public:
    Graphics();
    ~Graphics();

    /* Load an image in the _spriteSheets map if is not there yet
     * Returns the image from the map
     * */

    SDL_Surface* loadImage(const std::string &filePath);

    /*
     * Draws a texture to an specific part of the screen
     * */
    void blitSurface(SDL_Texture* source, SDL_Rect* sourceRectangle, SDL_Rect* destinationRectangle);


    /*
     *  Renders everythng to the screen
     * */
    void flip();


    /* Clears the screen
     * */

    void clear();

    /*
     * Return the renderer
     * */
    SDL_Renderer* getRenderer() const;

private:
    SDL_Window* _window;
    SDL_Renderer* _renderer;

    std::map<std::string, SDL_Surface*> _spriteSheets;
};


#endif //CAVESTORY_GRAPHICS_H
