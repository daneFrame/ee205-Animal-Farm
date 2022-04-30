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

using namespace std;

//void Cat::zeroProtocol() {
   // memset(name, 0, MAX_NAME);
  //  Gender = UNKNOWN_GENDER;
   // Breed = UNKNOWN_BREED;
    //catFixed = false;
    //next = nullptr;
    //weight = UNKNOWN_WEIGHT;
//}

//Cat::Cat() {
  //  zeroProtocol();
//}

//Cat::Cat(const char *newName, const gender newGender, const breed newBreed, const Weight newWeight) : Cat() {
  //  setName(newName);
    //setGender(newGender);
    //setBreed(newBreed);
    //setWeight(newWeight);
//}

Cat::Cat(std::string newName, const gender newGender, const breed newBreed, const Weight newWeight) : Cat() {
    setName(newName);
    setGender(newGender);
    setBreed(newBreed);
    setWeight(newWeight);
}

Cat::~Cat() {
    zeroProtocol();
}

std::string *Cat::getName() const noexcept {
return name;
}

//const char *Cat::getName() const noexcept {
//    return name;
//}

//void Cat::setName(const char *newName) {
  //  validateName(newName);
   // memset(name, 0, MAX_NAME);
    //strcpy(name, newName);
//}

void Cat::setName(std::string *newName){
    validateName(newName);
    memset(name, 0, MAX_NAME);
    strcpy(name, newName);
}

gender Cat::getGender() const noexcept {
    return Gender;
}

breed Cat::getBreed() const noexcept {
    return Breed;
}

bool Cat::isFixed() const noexcept {
    return catFixed;
}

Weight Cat::getWeight() const noexcept {
    return weight;
}

#define FORMAT_LINE(className, member) cout << setw(8) << ( className ) << setw(20) << member << setw(52)

bool Cat::validate() const noexcept {
    try {
        validateName(name);
        validateGender(Gender);
        validateBreed(Breed);
    } catch (exception const& e) {
        cout << e.what() << endl;
        return false;
    }
    return true;
}

//bool Cat::validateName(const char *newName) {
bool Cat::validateName(std::string *newName) {

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
    Cat::isCatFixed = true;
}

void Cat::setWeight(Weight newWeight) {
    validateWeight(newWeight);
    Cat::weight = newWeight;
}

//void Cat::setGender(gender newGender) {
  //  if(Gender != UNKNOWN_GENDER){
    //    throw logic_error(PROGRAM_NAME ": gender is already set and cannot be changed.");
    //}
    //validateGender(newGender);
    //Cat::Gender = newGender;
//}

void Cat::setBreed(breed newBreed) {
    if(Breed != UNKNOWN_BREED){
        throw logic_error(PROGRAM_NAME ": breed is already set and cannot be changed.");
    }
    validateBreed(newBreed);
    Cat::Breed = newBreed;
}

std::string Cat::speak() const {
    return "Meow";
}
