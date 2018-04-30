#include "Entity.h"

Entity::~Entity()
{
}

float Entity::GetX()
{
    return x;
}

float Entity::GetY()
{
    return y;
}

sf::Sprite Entity::GetSprite()
{
    return sprite;
}

sf::Texture Entity::GetTexture()
{
    return texture;
}

float Entity::GetCurrentFrame()
{
    return currentFrame;
}