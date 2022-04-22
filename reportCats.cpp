///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Project - EE 205 - Spr 2022
///
/// @file reportCats.cpp
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   08_APR_2022
///////////////////////////////////////////////////////////////////////////////

#include<stdbool.h>
#include<iostream>
#include<cassert>
#include <cstring>

#include "config.h"
#include "reportCats.h"
#include "catDatabase.h"
#include "Cat.h"

#define DEBUG

using namespace std;



bool printAllCats(){
    int currentNumCats = 0;
    assert(validateDatabase());
    for(Cat* iCat = catDatabaseHeadPtr; iCat != nullptr; iCat = iCat->next){
        iCat->print();
        currentNumCats++;
    }
    assert(validateDatabase());
    return true;
}

Cat* findCat(const char* name){

    assert(Cat().validateName(name));
for(Cat* iCat = catDatabaseHeadPtr; iCat != nullptr; iCat = iCat->next){
    if(strcmp(name, iCat->getName()) == 0){
        return iCat;
    }
}
return nullptr;
}

//const char* genderName(const enum gender Gender){
//    switch(Gender){
//        case UNKNOWN_GENDER: return "Unknown";
//        case FEMALE: return "Female";
//        case MALE: return "Male";
//    }
//    throw logic_error(PROGRAM_NAME ": gender name not recognized");
//}

const char* breedName(const enum breed Breed){
    switch(Breed){
        case UNKNOWN_BREED: return "Unknown";
        case MAINE_COON: return "Maine Coon";
        case MANX: return "Manx";
        case SPHYNX: return "Sphynx";
        case PERSIAN: return "Persian";
        case SHORTHAIR: return "Shorthair";
    }
    throw logic_error(PROGRAM_NAME ": breed name not recognized");
}
