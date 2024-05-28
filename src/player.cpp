#include "player.h"

using namespace godot;

Player::Player()
{
    x_ = 0;
    y_ = 0;
}
void Player::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("GetX"), &Player::GetX);
    ClassDB::bind_method(D_METHOD("GetY"), &Player::GetX);
}
float Player::GetX()
{
    return x_;
}
float Player::GetY()
{
    return y_;
}
void Player::_physics_process(double delta)
{
    x_+=1;
    y_+=1;
}
