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
extern void printCat(int index);
//extern void printCat(int index, int currentNumCats)
extern void printAllCats();
extern int findCat(char name[]);