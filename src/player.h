#ifndef _player_h
#define _player_h
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

namespace godot //If a class wishes to interface with the engine
{
    class Player : public Node2D //must be a child of Node2D
    {
        GDCLASS(Player, Node2D)
    private:
        float x_;
        float y_;
    public:
        
        Player();
        float GetX();
        float GetY();
        virtual void _physics_process(double delta) override;
    protected:
        static void _bind_methods();//if the engine needs to call methods of C++ classes
    };
}

#endif
