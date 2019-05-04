#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class GameObject
{
public:
    GameObject(const char *textureSheet, SDL_Renderer *renderer, int x, int y);
    ~GameObject();

    void Update();
    void Render();

private:
    int xPos;
    int yPos;

    SDL_Texture *objTexture;
    SDL_Rect srcRect, dstRect;
    SDL_Renderer *renderer;
};
