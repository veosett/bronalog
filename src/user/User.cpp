#include "User.h"

User::User(std::string img, float x, float y)
{
    this->x = x;
    this->y = y;

    if (!texture.loadFromFile(img))
    {
        // error...
    }

    currentFrame = 0;
    sprite.setTexture(texture);
    sprite.setTextureRect(sf::IntRect(0, 245, 40, 50));
    sprite.setPosition(sf::Vector2f(x, y));

}

int User::Update(float time)
{   
    CheckPressKeys();

    sprite.setPosition(x, y);
    return 0;
}

void User::CheckPressKeys()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        x -= dx;
        currentFrame += speedFrame;
        if (currentFrame > 6)
        {
            currentFrame = 0;
        }
        sprite.setTextureRect(sf::IntRect((int(currentFrame) * 40) + 40, 244, -40, 50));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        x += dx;
        currentFrame += speedFrame;
        if (currentFrame > 6)
        {
            currentFrame = 0;
        }
        sprite.setTextureRect(sf::IntRect(int(currentFrame) * 40, 244, 40, 50));
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