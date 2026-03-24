#pragma once

#include <cstddef>
#include "BitfieldType.h"
#include "PiSubmarine/GPIO/Api/Level.h"

namespace PiSubmarine::GPIO::Api
{
    class Levels
    {
    public:
        constexpr Levels() = default;
        explicit constexpr Levels(BitfieldType bits) : m_Bits(bits) {}

        constexpr Level Get(std::size_t pin) const
        {
            return (m_Bits >> pin) & 1 ? Level::High : Level::Low;
        }

        constexpr void Set(std::size_t pin, Level level)
        {
            m_Bits |= static_cast<uint64_t>(level) << pin;
        }

        constexpr BitfieldType Raw() const { return m_Bits; }

    private:
        BitfieldType m_Bits {0};


    };
}


