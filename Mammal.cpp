///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Mammal.cpp
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   DAY_MON_YEAR
///////////////////////////////////////////////////////////////////////////////
#include "Mammal.h"
#include "Animal.h"

Color Mammal::getColor() const noexcept {
    return color;
}

void Mammal::setColor(const Color newColor) noexcept {
    color = newColor;
}

void Mammal::dump() const noexcept {
    Animal::dump();
}
