#pragma once

#include <cstddef>
#include "BitfieldType.h"
#include "PiSubmarine/GPIO/Api/MaskBit.h"
#include <limits>

namespace PiSubmarine::GPIO::Api
{
    class Mask
    {
    public:
        constexpr Mask() = default;
        explicit constexpr Mask(BitfieldType bits) : m_Bits(bits) {}

        [[nodiscard]] constexpr MaskBit Get(std::size_t pin) const
        {
            return (m_Bits >> pin) & 1 ? MaskBit::Included : MaskBit::Excluded;
        }

        constexpr void Set(std::size_t pin, MaskBit bit)
        {
            m_Bits |= static_cast<BitfieldType>(bit) << pin;
        }

        [[nodiscard]] constexpr BitfieldType Raw() const { return m_Bits; }

        static consteval Mask GetAllBits()
        {
            return Mask{std::numeric_limits<BitfieldType>::max()};
        };

        constexpr auto operator<=>(const Mask&) const = default;

    private:
        BitfieldType m_Bits {0};
    };
}


