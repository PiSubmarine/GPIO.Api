#pragma once

#include <concepts>
#include <cstdint>
#include "PiSubmarine/GPIO/Api/Directions.h"
#include "PiSubmarine/GPIO/Api/Levels.h"
#include "PiSubmarine/GPIO/Api/Mask.h"

namespace PiSubmarine::GPIO::Api
{
    template <typename T>
    concept PinGroupConcept = requires(T t, const T ct, Directions d, Levels l, Mask m)
    {
        // Must be able to get and set directions
        { t.GetDirections() } -> std::same_as<Directions>;
        { t.SetDirections(d) } -> std::same_as<void>;

        // Must be able to get and set levels
        { t.GetLevels() } -> std::same_as<Levels>;
        { t.SetLevels(l, m) } -> std::same_as<void>;

        // Num() must be callable on a const instance and return a size_t
        { ct.Num() } -> std::convertible_to<size_t>;
    };
}
