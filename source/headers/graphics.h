//
// Created by Danny Javier Sandi on 10/14/15.
//

#ifndef CAVESTORY_GRAPHICS_H
#define CAVESTORY_GRAPHICS_H

struct SDL_Window;
struct SDL_Renderer;

class Graphics {
public:
    Graphics();
    ~Graphics();
private:
    SDL_Window* _window;
    SDL_Renderer* _renderer;
};


#endif //CAVESTORY_GRAPHICS_H
