///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   DAY_MON_YEAR
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include <cstddef>

#include "Cat.h"


extern int currentNumCats;

extern Cat* catDatabaseHeadPtr;

extern void initialize();

extern bool isCatPresent(const Cat* aCat);

extern bool validateDatabase();