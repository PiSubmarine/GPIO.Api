#pragma once

#include <cstdint>

#include "PiSubmarine/GPIO/Api/IPinGroup.h"

namespace PiSubmarine::GPIO::Api
{
    class IDriver
    {
    public:
        virtual ~IDriver() = default;
        virtual IPinGroup& GetPinGroup(std::string_view groupName) = 0;
    };
}
