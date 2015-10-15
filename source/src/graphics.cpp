//
// Created by Danny Javier Sandi on 10/14/15.
//
#include <SDL.h>
#include "graphics.h"

/* Graphics Class
 * Handles everything related to graphics
 */

Graphics::Graphics(){
    SDL_CreateWindowAndRenderer(640,480, 0, &this->_window, &this->_renderer);
    SDL_SetWindowTitle(this->_window, "CaveStory");
}

Graphics::~Graphics(){
    SDL_DestroyWindow(this->_window);
}