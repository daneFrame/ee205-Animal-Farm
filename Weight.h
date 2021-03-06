///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-lab12a-fatCat - EE 205 - Spr 2022
///
/// @file Weight.h
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   16_APR_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include <string>
#include <ostream>

using namespace std;

class Weight {
public:  ////////////// Enumerations //////////////
    /// A unit of measure for weight

    static float fromKilogramToPound(float kilogram) noexcept;
    static float fromPoundToKilogram(float pound) noexcept;
    static float fromSlugToPound(float slug) noexcept;
    static float fromPoundToSlug(float pound) noexcept;

    typedef float t_weight;

    enum UnitOfWeight {
        POUND, KILO, SLUG
    };

    enum UnitOfWeight unitOfWeight;

public:
    float weightInPounds;
    float weightInSlugs;
    float weighInKilos;
    bool bIsKnown;
    bool bHasMax;
    float maxWeight;
    float weight;
    float checkWeight;
    float convertedWeight;

public:
    Weight() noexcept;
    Weight(float newWeight) ;
    Weight(UnitOfWeight newUnitOfMeasure) noexcept;
    Weight(float newWeight, UnitOfWeight newUnitOfMeasure);
    Weight(float newWeight, float newMaxWeight);
    Weight(UnitOfWeight  newUnitOfMeasure, float newMaxWeight);
    Weight(float newWeight, UnitOfWeight newUnitOfMeasure, float newMaxWeight);

public:
    static float convertWeight();
    bool isWeightKnown() const noexcept;
    bool hasMaxWeight() const noexcept;
    bool validate () const noexcept;
    bool isWeightValid(float checkWeight) noexcept;
    float getWeight() const noexcept;
    float getWeight(UnitOfWeight weightUnits) const noexcept;
    float getMaxWeight() const noexcept;
    bool operator==(const Weight &rhs_Weight) const;
    Weight & operator+=(float rhs_addToWeight);

    void setWeight(float newWeight);
    void setWeight(float newWeight, UnitOfWeight weightUnits);
    void setMaxWeight(float newMaxWeight);
    void dump() const noexcept;

    bool isWeightValid(float checkWeight) const;

public:
    static float convertWeight( float fromWeight, Weight::UnitOfWeight fromUnit,Weight::UnitOfWeight toUnit ) noexcept;
};

inline std::ostream& operator<<( std::ostream& lhs_stream
        ,const Weight::UnitOfWeight rhs_UnitOfMeasure ) {
    switch (rhs_UnitOfMeasure) {
        case Weight::POUND:
            return lhs_stream << "POUNDS";
        case Weight::KILO:
            return lhs_stream << "KILOS";
        case Weight::SLUG:
            return lhs_stream << "SLUGS";
        default:
            throw std::out_of_range("The unit can???t be mapped to a string");
    }
}