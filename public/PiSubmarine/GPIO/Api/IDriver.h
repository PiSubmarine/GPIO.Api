#pragma once

#include "PiSubmarine/GPIO/Api/IPinGroup.h"
#include <string_view>

namespace PiSubmarine::GPIO::Api
{
    class IDriver
    {
    public:
        virtual ~IDriver() = default;
        virtual IPinGroup& GetPinGroup(std::string_view groupName) = 0;
    };
}
