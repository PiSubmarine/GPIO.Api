#include <gtest/gtest.h>
#include "PiSubmarine/GPIO/Api/IDriver.h"
#include "PiSubmarine/GPIO/Api/DriverConcept.h"

#include <cstdint>

namespace PiSubmarine::GPIO::Api
{
    TEST(IDriverTest, Concepts)
    {
        static_assert(DriverConcept<IDriver>, "IDriver must satisfy DriverConcept");
        static_assert(PinGroupConcept<IPinGroup>, "IPinGroup must satisfy IPinGroup");

    }
}