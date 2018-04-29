#pragma once
#include "Entity.h"

class User : public Entity
{
public:
    User(std::string img, float x, float y);
    ~User() override;
    float GetX() override;
    float GetY() override;
    sf::Sprite GetSprite() override;
    sf::Texture GetTexture() override;
    int GetNumFrame() override;
    int Update() override;
    void CheckPressKeys();


private:
    enum State
    {
        Stay = 0,
        Run = 1,
        Fire = 2,
    };

    float dx = 0.1;
    float dy = 0.1;

};