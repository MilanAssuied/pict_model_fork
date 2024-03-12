#pragma once
#include <msclr/marshal_cppstd.h>

using namespace System;

namespace converters {
	class string_converters
	{
	public:
		static std::string managed_string_to_standard_string(String^ string);
	};
}

