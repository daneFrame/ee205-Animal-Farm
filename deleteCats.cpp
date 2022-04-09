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
#include<cassert>

#include "catDatabase.h"
#include "deleteCats.h"
#include "Cat.h"
#include "config.h"

using namespace std;

bool deleteAllCats()
{
while(catDatabaseHeadPtr != nullptr){
    deleteCat(catDatabaseHeadPtr);
}
    //for(int i = 0; i < MAX_CATS; i++)
    //{
      //  memset(catDeetsArray[i].Name, 0, MAX_CATS);

        //catDeetsArray[i].Gender = UNKNOWN_GENDER;
        //catDeetsArray[i].weight = 0;
        //catDeetsArray[i].Breed = UNKNOWN_BREED;
        //catDeetsArray[i].isFixed = 0;
        //catDeetsArray[i].collarColor1 = NONE;
        //catDeetsArray[i].collarColor2 = NONE;
        //catDeetsArray[i].license = 0;
    //}
    //currentNumCats = 0;
    return true;
}

bool deleteCat(Cat* deleteThisCat){
    assert(deleteThisCat != nullptr);
assert(validateDatabase());
if(deleteThisCat == catDatabaseHeadPtr) {
    catDatabaseHeadPtr = catDatabaseHeadPtr->next;
    delete deleteThisCat;
    currentNumCats--;
    assert(validateDatabase());
    return true;
}
Cat* iCat = catDatabaseHeadPtr;
while(iCat != nullptr){
    if(iCat->next == deleteThisCat){
        iCat->next = deleteThisCat->next;
        delete deleteThisCat;
        currentNumCats--;
        assert(validateDatabase());
        return true;
    }
    iCat = iCat->next;
}
assert(validateDatabase());
throw invalid_argument(PROGRAM_NAME ": unable to delete cat. No such cat in database");
}

