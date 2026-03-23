#pragma once

#include <cstdint>
#include <concepts>
#include "PiSubmarine/GPIO/Api/Direction.h"
#include "PiSubmarine/GPIO/Api/Level.h"
#include <vector>

namespace PiSubmarine::GPIO::Api
{
	template<typename T>
	concept PinGroupConcept = requires(T pin)
	{
		{ pin.GetDirection() } -> std::same_as<std::vector<Direction>>;
		{ pin.SetDirection(std::vector<Direction>{}) } -> std::same_as<void>;

		{ pin.GetLevel() } -> std::same_as<std::vector<Level>>;
		{ pin.SetLevel(std::vector<Level>{}) } -> std::same_as<void>;
	};

}