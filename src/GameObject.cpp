#include "GameObject.h"
#include "TextureManager.h"

GameObject::GameObject(const char *textureSheet, SDL_Renderer *renderer, int x, int y)
{
    GameObject::renderer = renderer;
    objTexture = TextureManager::LoadTexture(textureSheet, renderer);

    xPos = x;
    yPos = y;
}

void GameObject::Update()
{
    // TODO: Sprite sizing and resizing
    srcRect.h = 64;
    srcRect.w = 64;
    srcRect.x = 0;
    srcRect.y = 0;

    dstRect.h = srcRect.h * 2;
    dstRect.w = srcRect.w * 2;
    dstRect.x = xPos;
    dstRect.y = yPos;
}

void GameObject::Render()
{
    SDL_RenderCopy(renderer, objTexture, &srcRect, &dstRect);
}