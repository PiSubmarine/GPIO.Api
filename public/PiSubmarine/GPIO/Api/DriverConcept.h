#pragma once

#include "PiSubmarine/GPIO/Api/PinGroupConcept.h"
#include <type_traits>

namespace PiSubmarine::GPIO::Api
{
	template<typename T>
	concept DriverConcept = requires(T driver, std::string_view name)
	{
		requires PinGroupConcept<
			std::remove_reference_t<decltype(driver.GetPinGroup(name))>
		>;
	};

}