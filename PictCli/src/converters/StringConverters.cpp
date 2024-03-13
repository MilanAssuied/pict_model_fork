#include "StringConverters.h"


namespace converters {

	std::string string_converters::managed_string_to_standard_string(String^ string)
	{
		msclr::interop::marshal_context context;
		return context.marshal_as<std::string>(string);
	}

}
