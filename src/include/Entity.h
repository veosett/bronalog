#pragma once
#include <string>

#include <SFML/Graphics.hpp>

class Entity
{
public:
    virtual ~Entity();
    virtual float GetX() = 0;
    virtual float GetY() = 0;
    virtual sf::Sprite GetSprite() = 0;
    virtual sf::Texture GetTexture() = 0;
    virtual int GetNumFrame() = 0;
    virtual int Update() = 0;
    
protected:
    float x;
    float y;
    bool onGround;
    std::string img;
    int numFrame;

    //SFML
    sf::Image image;
    sf::IntRect intRect;
    sf::Texture texture;
    sf::Sprite sprite;


};

