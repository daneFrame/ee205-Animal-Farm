///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   DAY_MON_YEAR
///////////////////////////////////////////////////////////////////////////////
#include<stdbool.h>
#include <cassert>


#include "addCats.h"
#include "catDatabase.h"
#include "config.h"
#include "reportCats.h"

using namespace std;

//struct catDeets catDeetsArray[MAX_CATS];

int currentNumCats = 0;

Cat* catDatabaseHeadPtr = nullptr;

void initialize(){
    if(catDatabaseHeadPtr != nullptr){
        throw logic_error(PROGRAM_NAME ": delete the old database first, yo.");
    }
    assert(validateDatabase());
}

bool isCatPresent(const Cat* aCat){
    assert(aCat != nullptr);
    assert(validateDatabase());
    for(Cat* iCat = catDatabaseHeadPtr; iCat != nullptr; iCat = iCat->next){
        if(iCat == aCat){
            return true;
        }
    }
    assert(validateDatabase());
    return false;
}

extern bool validateDatabase(){
    int validCats = 0;
    for(Cat* iCat = catDatabaseHeadPtr; iCat != nullptr; iCat = iCat->next){
        if(!iCat->validate()){
            return false;
        }
        Cat* foundCat = findCat(iCat->getName());
        if(foundCat != iCat){
            cout << PROGRAM_NAME ": Warning: duplicate cat name [" << iCat->getName() << "]" << endl;
        }
        validCats++;
    }
    if(validCats != currentNumCats){
        cout << PROGRAM_NAME << ": Error: currentNumCats [" << currentNumCats << "] does not equal [" << validCats << "]" << endl;
        return false;
    }
    return true;
}