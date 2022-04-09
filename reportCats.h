///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Project - EE 205 - Spr 2022
///
/// @file reportCats.h
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   DAY_MON_YEAR
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "catDatabase.h"
#include "addCats.h"
#include "Cat.h"

//extern void printCat(int index);
extern bool printAllCats();
//extern int findCat(const char name[]);
extern Cat* findCat(const char* name);
extern const char* genderName(enum gender Gender);
extern const char* breedName(enum breed Breed);