#pragma once

#include <string>


namespace core
{
    class entity
    {
    private:
        std::string m_name_;
        float m_x_pos_, m_y_pos_;
        
    public:
        entity(std::string name, float x_pos, float y_pos);

        void move(float delta_x, float delta_y);

        float get_x_position() const { return m_x_pos_; };
        float get_y_position() const { return m_y_pos_; };
    };
}