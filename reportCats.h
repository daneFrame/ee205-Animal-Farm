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

#include "Cat.h"
#include "config.h"

extern bool printAllCats();
//extern Cat* findCat(const char* name);
extern Cat* findCat(std::string name);
extern const char* genderName(enum gender Gender);
extern const char* breedName(enum breed Breed);