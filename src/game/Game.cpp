#include "Game.h"

Game::Game(sf::RenderWindow* window, sf::Event* event) : user("fang.png", 10, 10)
{
    this->window = window;
    this->event = event;
}

Game::~Game()
{
}

int Game::Draw()
{
    window->clear(sf::Color::White);
    window->draw(user.GetSprite());
    window->display();

    return 0;
}

int Game::Go()
{
    UpdateGame();
    Draw();
    return 0;
}

int Game::UpdateGame() 
{
    sf::Time elapsed = clock.restart();
    user.Update();


    return 0;
}
