#pragma once

// Causes 0>servprov.h(99,64): Error C3699 : '*': cannot use this indirection on type 'IServiceProvider' if removed
// ReSharper disable once CppUnusedIncludeDirective
#include <msclr/marshal_cppstd.h>

namespace cli_wrapper {

    template<class T>
    public ref class managed_object
    {
    private:

        void free_members() 
        {
            if (m_instance_ != nullptr)
            {
                delete m_instance_;
            }
        
        }

    protected:
        T* m_instance_;

    public:
        managed_object(T* instance): m_instance_(instance)
        {
        }

        virtual ~managed_object()
        {
            free_members();
        }

        !managed_object()
        {
            free_members();
        }

        T* get_instance()
        {
            return m_instance_;
        }
    };
}