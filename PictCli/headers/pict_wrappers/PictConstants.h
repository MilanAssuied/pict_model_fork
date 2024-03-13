#pragma once


namespace pict_wrapper
{
    public ref class pict_constants abstract sealed
    {
    public:
        
        static property unsigned int DefaultSeed
        {
            public:
                unsigned int get();
            private:
                void set(unsigned int value);
        }

    };
}