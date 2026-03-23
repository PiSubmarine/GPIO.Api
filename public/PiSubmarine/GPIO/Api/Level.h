#pragma once
#include <cstdint>

namespace PiSubmarine::GPIO::Api
{
    enum class Level : uint8_t
    {
        Low = 0,
        High = 1
    };
}
