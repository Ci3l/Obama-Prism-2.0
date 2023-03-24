#include "GameObject.hpp"
#include "TextureManager.hpp"

GameObject::GameObject(const char* texturesheet, int x, int y)
{
    objTexture = TextureManager::LoadTexture(texturesheet);

    xpos = x;
    ypos = y;
}

void GameObject::Update()
{
    xpos++;
    ypos++;

    srcRect.h = 600;
    srcRect.w = 600;
    srcRect.x = 0;
    srcRect.y = 0;

    destRect.x = xpos;
    destRect.y = ypos;
    destRect.w = srcRect.w/4;
    destRect.h = srcRect.h/4;
}

void GameObject::Render()
{
    SDL_RenderCopy(Game::renderer, objTexture, &srcRect, &destRect);
}