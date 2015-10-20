//
// Created by Danny Javier Sandi on 10/19/15.
//

#include "input.h"

/* Input class
 * Handles the key events
 */

// Reset the keys not relevant at the start of each frame
void Input::beginNewFrame() {
    this->_pressedKeys.clear();
    this->_releaseKeys.clear();
}

// gets called when a key is pressed and assigns the scancodes to the map
void Input::keyDownEvent(const SDL_Event &event) {
    this->_pressedKeys[event.key.keysym.scancode] = true;
    this->_heldKeys[event.key.keysym.scancode] = true;
}

// gets called when a key is released
void Input::keyUpEvent(const SDL_Event &event) {
    this->_releaseKeys[event.key.keysym.scancode] = true;
    this->_heldKeys[event.key.keysym.scancode] = true;
}

// checks is an specific key was pressed
bool Input::wasKeyPressed(SDL_Scancode key) {
    return this->_pressedKeys[key];
}

// checks if a key was released
bool  Input::wasKeyReleased(SDL_Scancode key) {
    return this->_releaseKeys[key];
}

//checks ifa key is held

bool Input::isKeyHeld(SDL_Scancode key) {
    return this->_releaseKeys[key];
}