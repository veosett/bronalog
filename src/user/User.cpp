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
    CheckPressKeys(time);
    if (!onGround)
    {
        if (y < 500)
        {
            dy += 0.005 * time;
        }
        else
        {
            onGround = true;
            dy = 0;
        }
        y += dy;
    }

    sprite.setPosition(x, y);
    dx = 0;
    return 0;
}

void User::CheckPressKeys(float time)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        dx = 0.2;
        x -= dx * time;
        currentFrame += speedFrame * time;
        if (currentFrame > 6)
        {
            currentFrame = 0;
        }
        sprite.setTextureRect(sf::IntRect((int(currentFrame) * 40) + 40, 244, -40, 50));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        dx = 0.2;
        x += dx * time;
        currentFrame += speedFrame * time;
        if (currentFrame > 6)
        {
            currentFrame = 0;
        }
        sprite.setTextureRect(sf::IntRect(int(currentFrame) * 40, 244, 40, 50));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && onGround)
    {
        onGround = false;
        dy = -2.5;
        y += dy;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
    }
}

User::~User()
{
}