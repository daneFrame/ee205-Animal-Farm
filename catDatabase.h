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

//#include<stdbool.h>
#include <cstddef>

#include "Cat.h"

#define MAX_CATS 10
//#define MAX_NAME 50

//typedef int NumCats;

extern int currentNumCats;
//enum gender {UNKNOWN_GENDER, MALE, FEMALE};
//enum breed {UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};
//enum Color {NONE, WHITE, BLACK, BLUE};

//typedef float weight;
//const weight UNKNOWN_WEIGHT = -1 ;

//struct catDeets{
    //float weight;
  //  Weight weight;
    //enum gender Gender;
    //enum breed Breed;
    //char Name[MAX_NAME];
    //bool isFixed;
    //enum Color collarColor1;
    //enum Color collarColor2;
    //unsigned long long license;
//};

//extern struct catDeets catDeetsArray[];

extern Cat* catDatabaseHeadPtr;

extern void initialize();

extern bool isCatPresent(const Cat* aCat);

extern bool validateDatabase();