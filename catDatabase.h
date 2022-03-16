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
#include<stdbool.h>
#define MAX_CATS 10
#define MAX_NAME 50

extern int currentNumCats;
enum gender {UNKOWN_GENDER, MALE, FEMALE};
enum breed {UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};
enum Color {NONE, WHITE, BLACK, BLUE};

struct catDeets{
    float weight;
    enum gender Gender;
    enum breed Breed;
    char Name[MAX_NAME];
    bool isFixed;
    enum Color collarColor1;
    enum Color collarColor2;
    unsigned long long license;
};

extern struct catDeets catDeetsArray[];