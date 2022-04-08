///////////////////////////////////////////////////////////////////////////////
//           University of Hawaii, College of Engineering
/// @brief   Lab01a - Hello World - EE 205 - Spr 2022
///
/// @file    animalFarm.c
/// @version 1.0 - Initial version
///
///
/// @author  Dane Sears dsears@hawaii.edu
/// @date    16_FEB_2022
///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <iostream>

#include "catDatabase.h"
#include "addCats.h"
#include "reportCats.h"
#include "updateCats.h"
#include "deleteCats.h"
#include "config.h"

#define PROGRAM_TITLE "Animal Farm"
//#define DEBUG //tests/shows usability of animalFarm

using namespace std;

int main() {
    cout << "Starting " << PROGRAM_TITLE << endl ;
//#ifdef DEBUG
  //  addCat( "Christina", FEMALE, MAINE_COON, false, 8.8, BLUE, BLACK,69 );
    //addCat( "Dane", MALE, SPHYNX, false, 235, BLUE, WHITE, 666);
    //addCat( "Tom", MALE, MAINE_COON, true, 170, WHITE, BLACK, 1350);// name, sex, type, fixed, weight
    //printAllCats(); //print all initial names
    //printCat(0); //print Christina info
    //printCat(1); //print Dane info
    //printCat(2); //print Tom info

    //findCat("Dan"); //find Dane's place in the index (should fail with Dan
    //updateCatName(1, "Danus Torbalds");
    //updateCatLicense(1, 88);
    //updateCollarColor1(1, BLACK);
    //updateCollarColor2(1, BLACK);
    //printCat(1); //checks that update cats is working
    //fixCat(0); //fixes christina
    //printCat(4); //prints cat data (need to get this to fail)

    //printAllCats(); //for comfirming name changes
    //printf("DEBUG: ALL CAT INFO AFTER THIS SHOULD BE EMPTY\n");
    //deleteAllCats();
    //printCat(0);
    //printCat(1); //confirms individual data has been deleted
    //printCat(2);
    //printAllCats(); //confirms all cats have been deleted
    cout << "Done with " << PROGRAM_TITLE << endl ;
    //#endif
}