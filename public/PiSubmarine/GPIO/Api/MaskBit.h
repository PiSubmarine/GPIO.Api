#pragma once
#include <cstdint>

namespace PiSubmarine::GPIO::Api
{
    enum class MaskBit : uint8_t
    {
        Excluded = 0,
        Included = 1
    };
}
