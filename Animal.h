///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Animal.h
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   24_APR_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "Weight.h"
#include "Gender.h"
#include "Node.h"

#define KINGDOM_NAME "Animalia"

class Animal : public Node {
public:
    Animal (const Weight::t_weight newMaxWeight, const std::string &newClassification, const std::string &newSpecies);
    Animal (const Gender newGender, const Weight::t_weight newWeight, const Weight::t_weight newMaxWeight, const std::string &newClassification, const std::string &newSpecies);

    std::string getKingdom () const noexcept;
    std::string 	getClassification () const noexcept;
    std::string 	getSpecies () const noexcept;
    Gender 	getGender () const noexcept;
    Weight::t_weight 	getWeight () const noexcept;
    void 	setWeight (const Weight::t_weight newWeight);
    virtual std::string 	speak () const noexcept=0;
    void 	dump () const noexcept;
    bool 	validate () const noexcept;

private:
    static bool 	validateClassification (const std::string &checkClassification) noexcept;
    static bool 	validateSpecies (const std::string &checkSpecies) noexcept;
    std::string species;
    std::string classification;
    Gender gender = Gender::UNKNOWN_GENDER;
    Weight weight;

protected:
    void setGender( const Gender newGender);
};
