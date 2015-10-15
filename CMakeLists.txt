cmake_minimum_required(VERSION 3.3)
project(CaveStory)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CaveStory_SOURCE_DIR}/cmake")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})

set(SOURCE_FILES main.cpp)
add_executable(CaveStory ${SOURCE_FILES})

target_link_libraries(CaveStory ${SDL2_LIBRARY})