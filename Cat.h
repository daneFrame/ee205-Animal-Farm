///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Cat.h
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   08_APR_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include <string>

#include "config.h"
#include "Mammal.h"

class Cat : public Mammal {
public:
    static const std::string      SPECIES_NAME;
    static const Weight::t_weight MAX_WEIGHT;

protected:
    std::string name ;
    bool        isCatFixed ;

public:
    explicit Cat( const std::string& newName ) : Mammal( MAX_WEIGHT, SPECIES_NAME ) {
        if( !validateName( newName) ) {
            throw std::out_of_range( "Cats must have a name" );
        }
        name = newName;
        isCatFixed = false;

        Cat::validate();
    }

    Cat( const std::string&     newName
            ,const Color            newColor
            ,const bool             newIsFixed
            ,const Gender           newGender
            ,const Weight::t_weight newWeight
    ) : Mammal( newColor, newGender, newWeight, MAX_WEIGHT, SPECIES_NAME ) {
        if( !validateName( newName) ) {
            throw std::out_of_range( "Cats must have a name" );
        }
        name = newName;
        isCatFixed = newIsFixed;

        Cat::validate();
    }

public:
    std::string getName() const noexcept ;
    void setName( const std::string& newName );
    bool isFixed() const noexcept ;
    void fixCat() noexcept ;

public:
    std::string speak() const noexcept override;
    void dump() const noexcept override;
    bool validate() const noexcept override;

public:
    static bool validateName( const std::string& newName ) ;
};