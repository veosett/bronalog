#include "User.h"

User::User(std::string img, float x, float y)
{
    this->x = x;
    this->y = y;

    intRect.top = 245;
    intRect.left = 0;
    intRect.width = 35;
    intRect.height = 50;

    image.loadFromFile(img);
    if (!texture.loadFromImage(image, intRect))
    {
        // error...
    }

    numFrame = 0;
    sprite.setPosition(sf::Vector2f(x, y));

    sprite.setTexture(texture);

}

int User::Update()
{
    CheckPressKeys();

    texture.loadFromImage(image, intRect);
    sprite.setTexture(texture);
    sprite.setPosition(x, y);

    return 0;
}

void User::CheckPressKeys()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        x -= dx;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        x += dx;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        y -= dy;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        y += dy;
    }
}

User::~User()
{
}

float User::GetX()
{
    return x;
}

float User::GetY()
{
    return y;
}

sf::Sprite User::GetSprite()
{
    return sprite;
}

sf::Texture User::GetTexture()
{
    return texture;
}

int User::GetNumFrame()
{
    return numFrame;
}



