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

#include<iostream>
#include<stdexcept>

#include "config.h"

#define MAX_NAME 50

using namespace std;

class string;

class Cat {
protected:
    enum gender Gender;
    enum breed Breed;
    Weight weight;
    bool catFixed;
    //char name[MAX_NAME];
    std::string name;

public:
    Cat* next;

private:
    void zeroProtocol();

public:
    Cat();

    Cat(std::string *newName, const gender newGender, const breed newBreed, const Weight newWeight);


    //Cat(const char *newName, const gender newGender, const breed newBreed, const Weight newWeight);

    virtual ~Cat();

public:
    //const char *getName() const noexcept;
    std::string *getName() const noexcept;
    void setName(const char* newName);
    gender getGender() const noexcept;
    breed getBreed() const noexcept;
    bool isFixed() const noexcept;
    void fixCat() noexcept;
    Weight getWeight() const noexcept;
    void setWeight(Weight newWeight);

protected:
public:
    void setGender(gender newGender);
void setBreed(breed newBreed);

public:
    bool print() const noexcept;
    bool validate() const noexcept;

public:
    //static bool validateName(const char* newName);
    static bool validateName(std::string newName);
    static bool validateGender(const gender newGender);
    static bool validateBreed(const breed newBreed);
    static bool validateWeight(const Weight newWeight);
};