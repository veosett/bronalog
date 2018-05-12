#pragma once
#include <string>

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

class Map
{
public:
    Map();
    virtual ~Map();
    int Update(sf::RenderWindow* window);

private:
    float high = 32;
    float width = 32;
    sf::RectangleShape rectangle;
    std::string map[93] = {
    "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB",
    "B                                                                                          B",
    "B                                                                                          B",
    "B                                                                                          B",
    "B                                                                                          B",
    "B                                                                                          B",
    "B                                                                                          B",
    "B                                                                                          B",
    "B                                                                                          B",
    "B                                                                                          B",
    "B                                                                                          B",
    "B                                                                                          B",
    "B                                                                                          B",
    "B                                                                                          B",
    "B                                                                                          B",
    "B                                                                                          B",
    "B                                                                                          B",
    "B                                                                                          B",
    "B                                                                                          B",
    "B                                                                                          B",
    "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB",
    "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB",
    "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB",
    "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"
    };
};

