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

#include "reportCats.h"
#include "Cat.h"

using namespace std;

void Cat::zeroProtocol() {
    memset(name, 0, MAX_NAME);
    catGender = UNKNOWN_GENDER;
    catBreed = UNKNOWN_BREED;
    catFixed = false;
    next = nullptr;
    catWeight = UNKNOWN_WEIGHT;
}

Cat::Cat() {
    zeroProtocol();
}

Cat::Cat(const char *newName, const gender newGender, const breed, newBreed, const Weight newWeight) : Cat() {
    setName(newName);
    setGender(newGender);
    setBreed(newBreed);
    setWeight(newWeight);

    assert(validate());
}

