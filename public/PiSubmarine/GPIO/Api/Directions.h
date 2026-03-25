#pragma once

#include <cstdint>

#include "BitfieldType.h"
#include <cstddef>
#include <compare>
#include "PiSubmarine/GPIO/Api/Direction.h"

namespace PiSubmarine::GPIO::Api
{
    class Directions
    {
    public:
        constexpr Directions() = default;
        constexpr explicit Directions(BitfieldType bits) : m_Bits(bits) {}

        [[nodiscard]] constexpr Direction Get(std::size_t pin) const
        {
            return (m_Bits >> pin) & 1 ? Direction::Output : Direction::Input;
        }

        constexpr void Set(std::size_t pin, Direction direction)
        {
            m_Bits |= static_cast<uint64_t>(direction) << pin;
        }

        [[nodiscard]] constexpr BitfieldType Raw() const { return m_Bits; }

        constexpr auto operator<=>(const Directions&) const = default;

    private:
        BitfieldType m_Bits{0};


    };
}


