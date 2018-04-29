#pragma once
#include <SFML/Graphics.hpp>
#include "User.h"

int const TITLE_H = 32;
int const TITLE_W = 32;

class Game
{
public:
    Game(sf::RenderWindow* window, sf::Event* event);
    ~Game();
    int Draw();
    int Go();
    int UpdateGame();
private:
    sf::Clock clock;
    User user;

    sf::RenderWindow* window;
    sf::Event* event;
};