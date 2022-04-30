///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Mammal.h
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   DAY_MON_YEAR
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "Animal.h"
#include "Color.h"

class Mammal : public Animal {
public:
    static const std::string MAMMAL_NAME;
protected:
    Color color = Color::UNKNOWN_COLOR;
public:
    Mammal( const Weight::t_weight newMaxWeight,const std::string& newSpecies) : Animal( newMaxWeight, MAMMAL_NAME, newSpecies ) {};
    Mammal( const Color newColor,const Gender newGender,const Weight::t_weight newWeight,const Weight::t_weight newMaxWeight,const std::string& newSpecies) : Animal( newGender, newWeight, newMaxWeight, MAMMAL_NAME, newSpecies ) {
        setColor( newColor );};
public:
    ///Color getColor() const noexcept{return color;};
    void setColor( const Color newColor ) noexcept;
public:
    void dump() const noexcept ;

    Color getColor() const noexcept;
};