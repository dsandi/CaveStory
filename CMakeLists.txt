cmake_minimum_required(VERSION 3.3)
project(CaveStory)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CaveStory_SOURCE_DIR}/cmake")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
include_directories(${SDL2_INCLUDE_DIR} ${SDL2_IMAGE_INCLUDE_DIR} ${CaveStory_SOURCE_DIR}/source/headers)

configure_file(content/sprites/MyChar.png content/sprites/MyChar.png COPYONLY)
configure_file(content/backgrounds/bkBlue.png content/backgrounds/bkBlue.png COPYONLY)
configure_file(content/maps/Map\ 1.tmx content/maps/Map\ 1.tmx COPYONLY)
configure_file(content/tilesets/PrtCave.png ../tilesets/PrtCave.png COPYONLY)

set(SOURCE_FILES source/src/main.cpp source/src/graphics.cpp source/headers/graphics.h source/headers/game.h source/src/game.cpp source/headers/input.h source/src/input.cpp source/headers/sprite.h source/src/sprite.cpp source/headers/globals.h source/headers/animated_sprite.h source/src/animated_sprite.cpp source/headers/player.h source/src/player.cpp source/headers/level.h source/src/level.cpp source/headers/tinyxml2.h source/src/tinyxml2.cpp source/headers/tile.h source/src/tile.cpp)
add_executable(CaveStory ${SOURCE_FILES})

target_link_libraries(CaveStory ${SDL2_LIBRARY} ${SDL2_IMAGE_LIBRARIES})