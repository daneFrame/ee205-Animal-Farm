///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.h
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   DAY_MON_YEAR
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "catDatabase.h"

extern int addCat(char name[], enum gender catGender, enum breed catBreed, bool catFixed,float Weight,
        enum Color collarColor1, enum Color collarColor2, unsigned long long license);