#pragma once
#include "Direction.h"
#include "Level.h"

namespace PiSubmarine::GPIO::Api
{
    class IPinGroup
    {
    public:
        virtual ~IPinGroup() = default;

        virtual Direction GetDirection() const = 0;
        virtual void SetDirection(Direction direction) = 0;
        virtual Level GetLevel() const = 0;
        virtual void SetLevel(Level level) = 0;
    };
}
