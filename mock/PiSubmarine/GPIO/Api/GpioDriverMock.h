#pragma once

#include <gmock/gmock.h>
#include "PiSubmarine/GPIO/Api/IDriver.h"

namespace PiSubmarine::GPIO::Api
{
    class GpioDriverMock : public IDriver
    {
    public:
        MOCK_METHOD(std::shared_ptr<IPinGroup>, GetPinGroup,
                    (std::string_view groupName),
                    (override));
    };
}
