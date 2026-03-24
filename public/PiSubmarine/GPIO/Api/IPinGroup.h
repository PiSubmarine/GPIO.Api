#pragma once
#include <cstdint>
#include "PiSubmarine/GPIO/Api/Directions.h"
#include "PiSubmarine/GPIO/Api/Levels.h"
#include "PiSubmarine/GPIO/Api/Mask.h"

namespace PiSubmarine::GPIO::Api
{
    class IPinGroup
    {
    public:
        virtual ~IPinGroup() = default;

        virtual Directions GetDirections() = 0;
        virtual void SetDirections(Directions directions, Mask mask) = 0;

        virtual Levels GetLevels() = 0;
        virtual void SetLevels(Levels levels, Mask mask) = 0;

        [[nodiscard]] virtual size_t Num() const = 0;
    };
}
