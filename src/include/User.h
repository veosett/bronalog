#pragma once
#include "Entity.h"

class User : public Entity
{
public:
    User(std::string img, float x, float y);
    ~User() override;
    int Update(float time) override;
    void CheckPressKeys();
    int Move(int top, int left, int width, int height, bool left_side = false);
    //TODO: handle of keys(may be)
    //void HandleArrowKeyMovement();
private:
    enum State
    {
        Stay = 0,
        Run = 1,
        Fire = 2,
    };
    bool onGround;
    
    float dx = 0;
    float dy = 0;
    float speedFrame = 0.005;
    float time;

    bool IsMovingUp;
    bool IsMovingDown;
    bool IsMovingLeft;
    bool IsMovingRight;
};