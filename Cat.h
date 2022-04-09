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

#include "addCats.h"
#include "catDatabase.h"

using namespace std;

//#ifndef EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_CAT_H
//#define EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_CAT_H

class Cat {
protected:
    enum gender catGender;
    enum breed catBreed;
    Weight catWeight;
    bool catFixed;
    char name[MAX_NAME];

public:
    Cat* next;

private:
    void zeroProtocol();

public:
    Cat();

    Cat(const char *newName, const gender newGender, const breed newBreed, const Weight newWeight);

    virtual ~Cat();

public:
    const char *getName() const noexcept;
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
    static bool validateName(const char* newName);
    static bool validateGender(const gender newGender);
    static bool validateBreed(const breed newBreed);
    static bool validateWeight(const Weight newWeight);
};

//#endif //EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_CAT_H
