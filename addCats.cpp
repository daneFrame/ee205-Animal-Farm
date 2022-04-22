///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.cpp
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   09_APR_2022
///////////////////////////////////////////////////////////////////////////////

#include<iostream>

#include "addCats.h"
#include "catDatabase.h"
#include "config.h"
#include <cassert>

#define DEBUG

using namespace std;

bool addCat(Cat* newCat){
    assert(newCat != nullptr);
    newCat->validate();
    assert(validateDatabase());
    newCat->next = catDatabaseHeadPtr;
    catDatabaseHeadPtr = newCat;
    currentNumCats++;
    assert(validateDatabase());
    return true;
}