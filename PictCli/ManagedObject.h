#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace CLI {

    template<class T>
    public ref class ManagedObject
    {
    private:

        void FreeMembers() 
        {
            if (m_Instance != nullptr)
            {
                delete m_Instance;
            }
        
        }

    protected:
        T* m_Instance;

    public:
        ManagedObject(T* instance): m_Instance(instance)
        {
        }

        virtual ~ManagedObject()
        {
            FreeMembers();
        }

        !ManagedObject()
        {
            FreeMembers();
        }

        T* GetInstance()
        {
            return m_Instance;
        }

        static const char* string_to_char_array(String^ string)
        {
            IntPtr strPtr = Marshal::StringToHGlobalAnsi(string);
            const char* str = static_cast<const char*>(strPtr.ToPointer());
            //Marshal::FreeHGlobal(strPtr);
            return str;
        }
    };

}