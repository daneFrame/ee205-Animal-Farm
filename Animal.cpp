///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   24_APR_2022
///////////////////////////////////////////////////////////////////////////////
#include <iomanip>
#include <iostream>
#include <cassert>

#include "Weight.h"
#include "Animal.h"
#include "List.h"
#include "SinglyLinkedList.h"
#include "Node.h"
#include "Mammal.h"

Animal::Animal(const Weight::t_weight	newMaxWeight, const std::string & newClassification, const std::string & newSpecies){
    weight.setMaxWeight(newMaxWeight);
    classification = newClassification;
    species = newSpecies;
}

Animal::Animal(const Gender newGender, const Weight::t_weight newWeight, const Weight::t_weight newMaxWeight,
               const std::string &newClassification, const std::string &newSpecies) {
    gender = newGender;
    weight.setWeight(newWeight);
    weight.setMaxWeight(newMaxWeight);
    classification = newClassification;
    species = newSpecies;
}

void Animal::dump() const noexcept {
    FORMAT_LINE_FOR_DUMP("Node", "this") << this << endl;
    FORMAT_LINE_FOR_DUMP("Animal", "this") << this << endl;
    FORMAT_LINE_FOR_DUMP("Animal", "kingdom") << getKingdom() << endl;
    FORMAT_LINE_FOR_DUMP("Animal", "classification") << getClassification() << endl;
    FORMAT_LINE_FOR_DUMP("Animal", "species") << getSpecies() << endl;
    FORMAT_LINE_FOR_DUMP("Animal", "gender") << getGender() << endl;
    std::cout << "Animal  weight              " << getWeight() << " out of " << weight.maxWeight << " "
              << weight.unitOfWeight << std::endl;

    ///FORMAT_LINE_FOR_DUMP("Mammal", "color") << getColor << endl;
}
std::string Animal::getKingdom() const noexcept{
    return KINGDOM_NAME;
}

std::string Animal::getSpecies() const noexcept {
    return species;
}

void Animal::setGender(const Gender newGender){
    if(gender == Gender::UNKNOWN_GENDER){
        gender = newGender;
    }else{
        std::logic_error("Gender is known and therefore cannot be changed");
    }
}

bool Animal::validate() const noexcept{
assert(validateClassification(getClassification()));
assert(validateSpecies(getSpecies()));
assert(weight.validate());
    return true;
}

std::string Animal::getClassification() const noexcept {
    return classification;
}

bool Animal::validateClassification	(	const std::string & 	checkClassification	) noexcept	{
return !checkClassification.empty();
}

bool Animal::validateSpecies(const std::string & checkSpecies) noexcept{
    return !checkSpecies.empty();
}

