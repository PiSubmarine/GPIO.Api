#pragma once

#include "PiSubmarine/GPIO/Api/PinGroupConcept.h"
#include <type_traits>
#include <string_view>

namespace PiSubmarine::GPIO::Api
{
    template <typename T>
    concept DriverConcept = requires(T t, std::string_view name)
    {
        { t.GetPinGroup(name) } -> std::movable;

        requires PinGroupConcept<decltype(*t.GetPinGroup(name))>;
    };
}
