//
// Created by Danny Javier Sandi on 10/19/15.
//

#ifndef CAVESTORY_INPUT_H
#define CAVESTORY_INPUT_H

#include <map>
#include <SDL.h>

class Input{
public:
    void beginNewFrame();
    void keyUpEvent(const SDL_Event& event);
    void keyDownEvent(const SDL_Event& event);

    bool wasKeyPressed(SDL_Scancode key);
    bool wasKeyReleased(SDL_Scancode key);
    bool isKeyHeld(SDL_Scancode key);

private:
    std::map<SDL_Scancode, bool> _heldKeys;
    std::map<SDL_Scancode, bool> _pressedKeys;
    std::map<SDL_Scancode, bool> _releasedKeys;
};
#endif //CAVESTORY_INPUT_H
