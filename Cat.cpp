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

#include "reportCats.h"
#include "Cat.h"
#include "config.h"

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

Cat::Cat(const char *newName, const gender newGender, const breed newBreed, const Weight newWeight) : Cat() {
    setName(newName);
    setGender(newGender);
    setBreed(newBreed);
    setWeight(newWeight);

    assert(validate());
}

Cat::~Cat() {
    zeroProtocol();
}

const char *Cat::getName() const noexcept {
    return name;
}

void Cat::setName(const char *newName) {
    validateName(newName);
    memset(name, 0, MAX_NAME);
    strcpy(name, newName);
}

gender Cat::getGender() const noexcept {
    return catGender;
}

breed Cat::getBreed() const noexcept {
    return catBreed;
}

bool Cat::isFixed() const noexcept {
    return catFixed;
}

Weight Cat::getWeight() const noexcept {
    return catWeight;
}

#define FORMAT_LINE(className, member) cout << setw(8) << ( className ) << setw(20) << member << setw(52)

bool Cat::print() const noexcept {
    assert(validate());
    cout << setw(80) << setfill( '=' ) << "" << endl;
    cout << setfill( ' ' );
    cout << left;
    cout << boolalpha;
    FORMAT_LINE("Cat","name") << getName() << endl;
    FORMAT_LINE("Cat","gender") << getGender() << endl;
    FORMAT_LINE("Cat","breed") << getBreed() << endl;
    FORMAT_LINE("Cat", "isFixed") << isFixed() << endl;
    FORMAT_LINE("Cat","weight") << getWeight() << endl;
    return true;
}

bool Cat::validate() const noexcept {
    try {
        validateName(name);
        validateGender(catGender);
        validateBreed(catBreed);
        validateWeight(catWeight);
    } catch (exception const& e) {
        cout << e.what() << endl;
        return false;
    }
    return true;
}

bool Cat::validateName(const char *newName) {
    if(newName == nullptr) {
        throw invalid_argument(PROGRAM_NAME ": name must not be NULL");
    }
    if(strlen(newName) >= MAX_NAME){
        throw length_error(PROGRAM_NAME ": name must be less than MAX_NAME");
    }
    if(strlen(newName) <= 0){
        throw length_error(PROGRAM_NAME ": name must be of greater length than 0");
    }
return true;
}

bool Cat::validateGender(const gender newGender) {
    if(newGender == UNKNOWN_GENDER) {
        throw invalid_argument(PROGRAM_NAME ": gender must be known");
    }
return true;
}

bool Cat::validateBreed(const breed newBreed) {
    if(newBreed == UNKNOWN_BREED){
        throw invalid_argument(PROGRAM_NAME ": breed must be known");
    }
    return true;
}

bool Cat::validateWeight(const Weight newWeight) {
    if(newWeight <= 0){
        throw invalid_argument(PROGRAM_NAME ": weight must be greater than 0");
    }
    return true;
}

void Cat::fixCat() noexcept {
    Cat::catFixed = true;
}

void Cat::setWeight(Weight newWeight) {
    validateWeight(newWeight);
    Cat::catWeight = newWeight;
}

void Cat::setGender(gender newGender) {
    if(Gender != UNKNOWN_GENDER){
        throw logic_error(PROGRAM_NAME ": gender is already set and cannot be changed.");
    }
    validateGender(newGender);
    Cat::catGender == newGender;
}

void Cat::setBreed(breed newBreed) {
    if(Breed != UNKNOWN_BREED){
        throw logic_error(PROGRAM_NAME ": breed is already set and cannot be changed.");
    }
    validateBreed(newBreed);
    Cat::Breed = newBreed;
}