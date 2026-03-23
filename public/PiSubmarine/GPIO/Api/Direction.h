#pragma once
#include <cstdint>

namespace PiSubmarine::GPIO::Api
{
    enum class Direction : uint8_t
    {
        Input,
        Output
    };
}
