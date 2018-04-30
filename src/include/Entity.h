#pragma once
#include <string>

#include <SFML/Graphics.hpp>

class Entity
{
public:
    virtual ~Entity();
    virtual float GetX();
    virtual float GetY();
    virtual sf::Sprite GetSprite();
    virtual sf::Texture GetTexture();
    virtual float GetCurrentFrame();
    virtual int Update(float time) = 0;
    
protected:
    float x;
    float y;
    bool onGround;
    std::string img;
    float currentFrame;

    //SFML
    sf::Texture texture;
    sf::Sprite sprite;


};

