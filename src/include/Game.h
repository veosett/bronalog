#pragma once
#include <SFML/Graphics.hpp>
#include "User.h"
#include "Map.h"

int const TITLE_H = 32;
int const TITLE_W = 32;

class Game
{
public:
    Game(int width, int heigh);
    ~Game();
    int Render();
    int Go();
    int UpdateGame();
    int ProcessEvents();
private:
    sf::RenderWindow window;
    sf::Event event;
    sf::Clock clock;
    User user;
    Map map;
};