#include "EntityWrapper.h"
#include "StringConverters.h"

namespace cli_wrapper
{
    entity_wrapper::entity_wrapper(String^ name, float x_pos, float y_pos) :
        managed_object(
            new core::entity(converters::string_converters::managed_string_to_standard_string(name)
                , x_pos
                , y_pos)
        )
    {
        Console::WriteLine("Creating a new Entity-wrapper object!");
    }
    void entity_wrapper::move(float delta_x, float delta_y)
    {
        Console::WriteLine("The Move method from the Wrapper was called!");
        m_instance_->move(delta_x, delta_y);
    }
}