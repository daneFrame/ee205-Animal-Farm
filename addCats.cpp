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

//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//#include <string.h>
#include<iostream>

#include "addCats.h"
#include "catDatabase.h"
#include "config.h"
#include <cassert>

#define DEBUG

using namespace std;

//int validateDatabase(const char name[], Weight catWeight) {
  //  if ((catWeight < 0) | (currentNumCats > 9) | (strlen(name) > MAX_NAME) | (strlen(name) == 0))
   // {
     //   fprintf(stderr, "[%s]:\nCat name must be greater than 0 and less than 30.\nCat weight must be greater than zero\nThe number of Cats submiited into database\nmay not exceed 10\n", PROGRAM_NAME);
       // return 0;
    //}
    //return 1;
//}

//bool addCat(const char name[], enum gender catGender, enum breed catBreed, bool catFixed,Weight catWeight, enum Color collarColor1, enum Color collarColor2, unsigned long long license){

    //if (validateDatabase(name, catWeight))
    //{
        //strcpy(catDeetsArray[currentNumCats].Name, name);
        //catDeetsArray[currentNumCats].weight = catWeight;
        //catDeetsArray[currentNumCats].Gender = catGender;
      //  catDeetsArray[currentNumCats].Breed = catBreed;
        //catDeetsArray[currentNumCats].isFixed = catFixed;
        //catDeetsArray[currentNumCats].collarColor1 = collarColor1;
        //catDeetsArray[currentNumCats].collarColor2 = collarColor2;
        //catDeetsArray[currentNumCats].license = license;
    //}

    //return currentNumCats++;
//}

bool addCat(Cat* newCat){
    assert(newCat != nullptr);
    newCat->validate();
    //assert(validateDatabase());
    newCat->next = catDatabaseHeadPtr;
    catDatabaseHeadPtr = newCat;
    currentNumCats++;
    //assert(validateDatabase());
    return true;
}