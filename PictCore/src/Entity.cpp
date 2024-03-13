#include "core_api.h"

#include <iostream>


namespace core
{
    entity::entity(std::string name, const float x_pos, const float y_pos) : m_name_(std::move(name)), m_x_pos_(x_pos), m_y_pos_(y_pos)
    {
        std::cout << "Created the Entity object!" << '\n';
    }
    void entity::move(const float delta_x, const float delta_y)
    {
        m_x_pos_ += delta_x;
        m_y_pos_ += delta_y;
        std::cout << "Moved " << m_name_ << " to (" << m_x_pos_ << ", " << m_y_pos_ << ")." << '\n';
    }
}
