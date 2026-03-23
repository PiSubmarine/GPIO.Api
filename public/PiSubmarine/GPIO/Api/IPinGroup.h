#pragma once
#include "PiSubmarine/GPIO/Api/Direction.h"
#include "PiSubmarine/GPIO/Api/Level.h"
#include <vector>

namespace PiSubmarine::GPIO::Api
{
    class IPinGroup
    {
    public:
        virtual ~IPinGroup() = default;

        /// <summary>
        /// Gets directions of all pins in the group.
        /// </summary>
        /// <returns>Vector of directions. The vector will have size 1 if all pins have the same direction.</returns>
        virtual std::vector<Direction> GetDirection() const = 0;


        /// <summary>
        /// Sets directions of all pins in the group.
        /// </summary>
        /// <param name="direction">Vector of dimensions. Must have size 1 or equal to the number of pins in the group.</param>
        virtual void SetDirection(std::vector<Direction> direction) = 0;


        /// <summary>
        /// Get levels of all pins in the group.
        /// </summary>
        /// <returns>Vector of levels. The vector will have size 1 if all pins have the same level.</returns>
        virtual std::vector<Level> GetLevel() const = 0;


        /// <summary>
        /// Sets levels of all pins in the group.
        /// </summary>
        /// <param name="level">Vector of levels. Must have size 1 or equal to the number of pins in the group.</param>
        virtual void SetLevel(std::vector<Level> level) = 0;

        virtual std::size_t Num() const = 0;
    };
}
