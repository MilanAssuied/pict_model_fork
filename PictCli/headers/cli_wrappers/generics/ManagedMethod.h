#pragma once


namespace cli_wrapper {

    template<typename TResult>
    public ref class managed_method
    {
    protected:
        TResult (*m_method_) ();
    public:

        managed_method(TResult (*unmanaged_method)()): m_method_(unmanaged_method) {}

        TResult call()
        {
            return m_method_();
        }
    };
}