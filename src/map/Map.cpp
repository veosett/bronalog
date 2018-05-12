#include "Map.h"

Map::Map()
{
    rectangle.setSize(sf::Vector2f(high, width));
    rectangle.setFillColor(sf::Color::Black);
}


Map::~Map()
{
}

int Map::Update(sf::RenderWindow* window)
{
    for (int i = 0; i < 24; i++)
    {
        for (int j = 0; j < 93; j++)
        {
            if (map[i][j] == 'B')
            {
                rectangle.setFillColor(sf::Color::Blue);
            }
            if (map[i][j] == ' ')
            {
                continue;
            }
            rectangle.setPosition(j * high, i * width);
            window->draw(rectangle);
        }
    }
    return 0;
}
