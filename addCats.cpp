///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.cpp
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   DAY_MON_YEAR
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "addCats.h"
#include "catDatabase.h"
#include "config.h"

#define DEBUG

int validateDatabase(const char name[],float catWeight) {
    if ((catWeight < 0) | (currentNumCats > 9) | (strlen(name) > MAX_NAME) | (strlen(name) == 0))
    {
        fprintf(stderr, "[%s]:\nCat name must be greater than 0 and less than 30.\nCat weight must be greater than zero\nThe number of Cats submiited into database\nmay not exceed 10\n", PROGRAM_NAME);
        return 0;
    }
    return 1;
}

int addCat(const char name[], enum gender catGender, enum breed catBreed, bool catFixed,float catWeight, enum Color collarColor1, enum Color collarColor2, unsigned long long license){

    if (validateDatabase(name, catWeight))
    {
        strcpy(catDeetsArray[currentNumCats].Name, name);
        catDeetsArray[currentNumCats].weight = catWeight;
        catDeetsArray[currentNumCats].Gender = catGender;
        catDeetsArray[currentNumCats].Breed = catBreed;
        catDeetsArray[currentNumCats].isFixed = catFixed;
        catDeetsArray[currentNumCats].collarColor1 = collarColor1;
        catDeetsArray[currentNumCats].collarColor2 = collarColor2;
        catDeetsArray[currentNumCats].license = license;

#ifdef DEBUG
        printf("DEBUG: currentNumCats = %d\n", currentNumCats);
        printf("DEBUG: one of the cat names is %s\n", catDeetsArray[currentNumCats].Name);
#endif

    }

    return currentNumCats++;
}