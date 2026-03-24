#pragma once

#include <cstdint>

#include "BitfieldType.h"

#include "PiSubmarine/GPIO/Api/Direction.h"

namespace PiSubmarine::GPIO::Api
{
    class Directions
    {
    public:
        constexpr Directions() = default;
        constexpr explicit Directions(BitfieldType bits) : m_Bits(bits) {}

        [[nodiscard]] constexpr Direction Get(size_t pin) const
        {
            return (m_Bits >> pin) & 1 ? Direction::Output : Direction::Input;
        }

        constexpr void Set(size_t pin, Direction direction)
        {
            m_Bits |= static_cast<uint64_t>(direction) << pin;
        }

        [[nodiscard]] constexpr BitfieldType Raw() const { return m_Bits; }

    private:
        BitfieldType m_Bits;


    };
}


