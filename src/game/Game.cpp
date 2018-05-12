#include "Game.h"

Game::Game(int width, int heigh) : user("fang.png", 10, 10), window(sf::VideoMode(width, heigh), "Bronalog")
{
    window.setFramerateLimit(60);
}

Game::~Game() {}

int Game::Render()
{
    window.draw(user.GetSprite());
    window.display();

    return 0;
}

int Game::Go()
{
    while (window.isOpen()) {
        ProcessEvents();

        window.clear(sf::Color::White);

        UpdateGame();
        Render();
    }

    return 0;
}

int Game::UpdateGame() 
{
    float time = clock.getElapsedTime().asMicroseconds();
    time /= 700;
    clock.restart();
    user.Update(time);
    map.Update(&window);


    return 0;
}

int Game::ProcessEvents()
{
    while (window.pollEvent(event)) {
        switch (event.type) {
        case sf::Event::Closed:
            window.close();
            break;
        }
    }
    return 0;
}
