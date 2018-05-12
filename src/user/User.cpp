#include "User.h"

#define RUN_TOP_INDENT 244
#define RUN_WIDTH 40
#define RUN_HEIGHT 50

User::User(std::string img, float x, float y)
{
    this->x = x;
    this->y = y;

    if (!texture.loadFromFile(img))
    {
        // error...
    }
    onGround = false;
    currentFrame = 0;
    sprite.setTexture(texture);
    sprite.setTextureRect(sf::IntRect(0, 245, 40, 50));
    sprite.setPosition(sf::Vector2f(x, y));
}

int User::Update(float time)
{
    this->time = time;
    CheckPressKeys();
    if (!onGround)
    {
        if (y < 500)
        {
            dy += 0.01 * time;
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
    time;
    return 0;
}

void User::CheckPressKeys()
{

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        dx = 0.2;
        Move(244, 40, -40, 50, true);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        dx = 0.2;
        Move(244, 40, 40, 50);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && onGround)
    {
        onGround = false;
        dy = -8;
        y += dy;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
    }
}

int User::Move(int top, int left, int width, int height, bool left_side)
{
    currentFrame += speedFrame * time;
    if (currentFrame > 6) {
        currentFrame = 0;
    }

    int curr_left = 0;
    if (left_side) {
        x -= dx * time;
        curr_left += (int(currentFrame) * left);
    }
    else {
        x += dx * time;
        curr_left = int(currentFrame) * left;
    }
    if (onGround) {
        sprite.setTextureRect(sf::IntRect(curr_left, top, width, height));
    }
    else {
        int curr_left = 0;
        if (left_side) {
            curr_left += (int(currentFrame) * left);
        }
        else {
            curr_left = int(currentFrame) * left;
        }
        sprite.setTextureRect(sf::IntRect(left, 1015, width, 37));
    }
    return 0;
}

User::~User()
{
}
