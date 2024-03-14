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

        static property unsigned int PairWiseGeneration
        {
            public:
                unsigned int get();
            private:
                void set(unsigned int value);
        }
    };
}