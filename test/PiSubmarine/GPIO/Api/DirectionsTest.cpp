#include <gtest/gtest.h>
#include "PiSubmarine/GPIO/Api/IDriver.h"
#include "PiSubmarine/GPIO/Api/DriverConcept.h"

#include <cstdint>

namespace PiSubmarine::GPIO::Api
{
    TEST(DirectionsTest, Equality)
    {
        Directions directions1;
        directions1.Set(5, Direction::Output);
        Directions directions2;
        directions2.Set(5, Direction::Output);
        EXPECT_TRUE(directions1 == directions2);

        directions2.Set(7, Direction::Output);
        EXPECT_FALSE(directions1 == directions2);
    }
}