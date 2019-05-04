#/bin/bash

g++ src/main.cpp src/Game.cpp src/TextureManager.cpp src/GameObject.cpp -w -lSDL2 -lSDL2_image -o build/a.out
