#pragma once

#include "PiSubmarine/GPIO/Api/IPinGroup.h"
#include <string_view>
#include <memory>

namespace PiSubmarine::GPIO::Api
{
    class IDriver
    {
    public:
        virtual ~IDriver() = default;
        virtual std::shared_ptr<IPinGroup> GetPinGroup(std::string_view groupName) = 0;
    };
}
