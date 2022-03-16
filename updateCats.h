///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCats.h
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   DAY_MON_YEAR
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "catDatabase.h"

extern void updateCatName(int index, char newName[]);
extern void fixCat(int index);
extern void updateCatWeight(int index, float newWeight);
extern void updateCollarColor1(int index, enum Color newCollarColor1);
extern void updateCollarColor2(int index, enum Color newCollarColor2);
extern void updateCatLicense(int index, unsigned long long newLicense);