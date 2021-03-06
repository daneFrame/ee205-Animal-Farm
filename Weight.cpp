///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-lab12a-fatCat - EE 205 - Spr 2022
///
/// @file Weight.cpp
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   16_APR_2022
///////////////////////////////////////////////////////////////////////////////
#include <cassert>
#include <iostream>
#include <stdexcept>
#include <iomanip>

#include "Weight.h"

using namespace std;

static const float UNKNOWN_WEIGHT = 0;
static const float KILOS_IN_A_POUND = .453592;
static const float SLUGS_IN_A_POUND = .031081;

static const std::string POUND_LABEL = "Pound" ;
static const std::string KILO_LABEL = "Kilo";
static const std::string SLUG_LABEL = "Slug";


float pound, slug;


float Weight::fromKilogramToPound( const float kilogram ) noexcept {
return kilogram / KILOS_IN_A_POUND ;
}

float Weight::fromPoundToKilogram(const float pound) noexcept {
return pound * KILOS_IN_A_POUND;
}

float Weight::fromSlugToPound(const float slug) noexcept {
return slug / SLUGS_IN_A_POUND;
}

float Weight::fromPoundToSlug(const float slug) noexcept {
return slug * SLUGS_IN_A_POUND;
}

bool Weight::isWeightValid(float checkWeight) noexcept {

if ((checkWeight > 0) && (checkWeight < maxWeight)) {
return true;
}
return false;
}

float Weight::convertWeight(float fromWeight, Weight::UnitOfWeight fromUnit, Weight::UnitOfWeight toUnit) noexcept {
switch(fromUnit){
case POUND:
switch (toUnit) {
case POUND:
return fromWeight;
case KILO:
return Weight::fromPoundToKilogram(fromWeight);
case SLUG:
return Weight::fromPoundToSlug(fromWeight);
}
case KILO:
switch (toUnit) {
case POUND:
return fromKilogramToPound(fromWeight);
case KILO:
return fromWeight;
case SLUG:
return fromSlugToPound(fromKilogramToPound(fromWeight));
}
case SLUG:
switch (toUnit){
case POUND:
return fromSlugToPound(fromWeight);
case KILO:
return fromPoundToKilogram(fromSlugToPound(fromWeight));
case SLUG:
return fromWeight;
}

}
return 0;
}

Weight::Weight() noexcept {
bIsKnown = false;
bHasMax = false;
unitOfWeight = POUND;
maxWeight = UNKNOWN_WEIGHT;
}

///Weight::Weight( const UnitOfWeight newUnitOfWeight, const float newMaxWeight ) : Weight( newUnitOfWeight ) {
///  setMaxWeight( newMaxWeight );
/// assert( validate() );
///}

Weight::Weight(float newWeight) {
    bIsKnown = false;
    bHasMax = false;
    unitOfWeight = POUND;
    weight = newWeight;
    maxWeight = UNKNOWN_WEIGHT;
}

bool Weight::isWeightKnown() const noexcept {
return bIsKnown;
}

bool Weight::validate() const noexcept {
assert(validate());
return true;
}

float Weight::getWeight(Weight::UnitOfWeight weightUnits) const noexcept{
if(weight == 0){
return UNKNOWN_WEIGHT;
}
assert(validate());
float convertedWeight = convertWeight(weight, unitOfWeight, weightUnits);
return convertedWeight;
}

float Weight::getMaxWeight() const noexcept {
if(validate()) {
return maxWeight;
}else{
return UNKNOWN_WEIGHT;
}
}

void Weight::setMaxWeight(float newMaxWeight) {
    maxWeight = newMaxWeight;
}

Weight::Weight(float newWeight, float newMaxWeight) {
    bIsKnown = false;
    bHasMax = false;
    unitOfWeight = POUND;
    weight = newWeight;
    maxWeight = UNKNOWN_WEIGHT;
}

Weight::Weight(float newWeight, UnitOfWeight newUnitOfWeight, float newMaxWeight) {
    bIsKnown = true;
    bHasMax = true;
    unitOfWeight = newUnitOfWeight;
    weight = newWeight;
    maxWeight = newMaxWeight;
}


////getters
float Weight::getWeight() const noexcept{
return weight;
}
bool Weight::hasMaxWeight() const noexcept {

return bHasMax;
}
///////////////////////////////////////////////////////

//std::ostream& operator<<( ostream& lhs_stream
  //      ,const Weight::UnitOfWeight rhs_UnitOfWeight ) {
    //switch( rhs_UnitOfWeight ) {
      //  case Weight::POUND: return lhs_stream << POUND_LABEL ;
        //case Weight::KILO:  return lhs_stream << KILO_LABEL ;
        //case Weight::SLUG:  return lhs_stream << SLUG_LABEL ;
        //default:
        //    throw out_of_range( "The unit can???t be mapped to a string" );
    //}
//}

bool Weight::operator==(const Weight &rhs_Weight) const {

    float lhs_weight = bIsKnown ? getWeight(Weight::POUND) : 0;
    float rhs_weight = (rhs_Weight.bIsKnown) ? rhs_Weight.getWeight(Weight::POUND) : 0;
    return lhs_weight == rhs_weight;
}

Weight &Weight::operator+=(float rhs_addToWeight) {
    weight += rhs_addToWeight;
    return *this;
}

void Weight::dump() const noexcept {
cout << "==============================================" << endl;
cout << "bIsKnown: " << bIsKnown << endl;
cout << "bHasMax: " << bHasMax << endl;
cout << "Unit of Weight: " << unitOfWeight << endl;
cout << "Weight: " << weight << endl;
cout << "Max Weight: " << maxWeight << endl;
}

void Weight::setWeight(t_weight newWeight) {
    ///assert( isWeightValid( newWeight ) );
    weight = newWeight;
}