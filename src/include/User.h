#pragma once
#include "Entity.h"

class User : public Entity
{
public:
    User(std::string img, float x, float y);
    ~User() override;
    int Update(float time) override;
    void CheckPressKeys();
private:
    enum State
    {
        Stay = 0,
        Run = 1,
        Fire = 2,
    };

    float dx = 0.5F;
    float dy = 0.5F;
    float speedFrame = 0.02;

};