#pragma once
#include "PiSubmarine/GPIO/Api/Direction.h"
#include "PiSubmarine/GPIO/Api/Level.h"
#include <optional>

namespace PiSubmarine::GPIO::Api
{
    class IPinGroup
    {
    public:
        virtual ~IPinGroup() = default;

        virtual std::optional<Direction> GetDirection() const = 0;
        virtual void SetDirection(Direction direction) = 0;
        virtual std::optional<Level> GetLevel() const = 0;
        virtual void SetLevel(Level level) = 0;
    };
}
