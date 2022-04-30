///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Cat.cpp
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   08_APR_2022
///////////////////////////////////////////////////////////////////////////////
#include <cstring>
#include <cassert>
#include <iostream>
#include <stdexcept>
#include <iomanip>

#include "Weight.h"
#include "Cat.h"

const Weight::t_weight Cat::MAX_WEIGHT = 40;
const std::string Cat::SPECIES_NAME = "Felis Catus";

using namespace std;


void Cat::setName(const std::string &newName){
    assert(validateName(newName));
    name = newName;
}


bool Cat::isFixed() const noexcept {
    return isCatFixed;
}

bool Cat::validate() const noexcept {
    try {
        validateName(name);
        ///validateGender(Gender);
        ///validateBreed(Breed);
    } catch (exception const& e) {
        cout << e.what() << endl;
        return false;
    }
    return true;
}

bool Cat::validateName(const std::string &newName) {
    return !newName.empty();
}


void Cat::fixCat() noexcept {
    Cat::isCatFixed = true;
}

std::string Cat::speak() const noexcept {
    return "Meow";
}

std::string Cat::getName() const noexcept {
    return name;
}

void Cat::dump() const noexcept {
    Mammal::dump();
    FORMAT_LINE_FOR_DUMP( "Cat", "name") << name << std::endl;
    FORMAT_LINE_FOR_DUMP( "Cat", "is fixed") << isCatFixed << std::endl;
}