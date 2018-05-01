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
    window->draw(user.GetSprite());
    window->display();

    return 0;
}

int Game::Go()
{
    window->clear(sf::Color::White);
    UpdateGame();
    Draw();
    return 0;
}

int Game::UpdateGame() 
{
    float time = clock.getElapsedTime().asMicroseconds();
    time /= 800;
    clock.restart();
    user.Update(time);
    map.Update(window);


    return 0;
}
