///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file deleteCats.cpp
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   DAY_MON_YEAR
///////////////////////////////////////////////////////////////////////////////
#include<string.h>
#include "catDatabase.h"
#include "deleteCats.h"
#include "config.h"

void deleteAllCats()
{
    //memset(catDeetsArray[], 0, MAX_CATS);
    for(int i = 0; i < MAX_CATS; i++)
    {
        memset(catDeetsArray[i].Name, 0, MAX_CATS);

        catDeetsArray[i].Gender = UNKOWN_GENDER;
        catDeetsArray[i].weight = 0;
        catDeetsArray[i].Breed = UNKNOWN_BREED;
        catDeetsArray[i].isFixed = 0;
        catDeetsArray[i].collarColor1 = NONE;
        catDeetsArray[i].collarColor2 = NONE;
        catDeetsArray[i].license = 0;

    }
    currentNumCats = 0;
}