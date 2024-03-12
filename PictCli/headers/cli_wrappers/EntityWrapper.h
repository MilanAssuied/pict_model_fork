#pragma once

#include "ManagedObject.h"

#include "..\PictCore\core_api.h"

using namespace System;

namespace cli_wrapper
{
    public ref class entity_wrapper sealed : public managed_object<core::entity>
    {
    public:

        entity_wrapper(String^ name, float x_pos, float y_pos);

        void move(float delta_x, float delta_y);

        property float XPosition
        {
        public:
            float get()
            {
                return m_instance_->get_x_position();
            }
        private:
            void set(float value)
            {
            }
        }

        property float YPosition
        {
        public:
            float get()
            {
                return m_instance_->get_y_position();
            }
        private:
            void set(float value)
            {
            }
        }

    };
}