#pragma once

#include <cstdint>
#include <concepts>
#include "PiSubmarine/GPIO/Api/Direction.h"
#include "PiSubmarine/GPIO/Api/Level.h"

namespace PiSubmarine::GPIO::Api
{
	template<typename T>
	concept PinGroupConcept = requires(T pin)
	{
		{ pin.GetDirection() } -> std::same_as<Direction>;
		{ pin.SetDirection(Direction{}) } -> std::same_as<void>;

		{ pin.GetLevel() } -> std::same_as<Level>;
		{ pin.SetLevel(Level{}) } -> std::same_as<void>;
	};

}