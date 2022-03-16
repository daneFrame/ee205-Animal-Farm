///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCats.cpp
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   DAY_MON_YEAR
///////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<string.h>

#include "config.h"
#include "updateCats.h"
#include "catDatabase.h"

void updateCatName(int index, char newName[])
{
    if(strlen(newName) < 1 || strlen(newName) > MAX_NAME)
    {
        printf("ERROR:\nCat name must be greater than 0 and less than 30.\nCat weight must be greater than zero\nThe number of Cats submiited into database\nmay not exceed 10\n");
    }
    for(int index; index < MAX_CATS; index++)
    {
        if ( strcmp(catDeetsArray[index].Name, newName) == 0)
        {
            fprintf( stderr, "%s: Cat name [%s] is already in the database.\n", PROGRAM_NAME, newName ) ;
        }
    }
    strcpy(catDeetsArray[index].Name, newName);
}

void fixCat(int index)
{
    if(catDeetsArray[index].isFixed == 0)
    {
        catDeetsArray[index].isFixed = true;
    }else{
        catDeetsArray[index].isFixed = false;
    }
}

void updateCatWeight(int index, float newWeight)
{
    if(newWeight <= 0)
    {
        fprintf(stderr, "%s: Weight must exceed zero.\n",PROGRAM_NAME);
    }else{
        catDeetsArray[index].weight = newWeight;
    }
}

void updateCollarColor1 (int index, enum Color newCollarColor1 ){
    catDeetsArray[index].collarColor1 = newCollarColor1;
}

void updateCollarColor2 (int index, enum Color newCollarColor2 ){
    catDeetsArray[index].collarColor2 = newCollarColor2;
}

void updateCatLicense (int index, unsigned long long newLicense ){
    catDeetsArray[index].license = newLicense;
}
