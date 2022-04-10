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
#include <cassert>
#include <cstring>

#include "catDatabase.h"
#include "addCats.h"
#include "reportCats.h"
//#include "updateCats.h"
#include "deleteCats.h"
#include "config.h"
#include "Cat.h"

//#define PROGRAM_TITLE "Animal Farm"


#define LARGE_NAME "00000000010000000002000000000300000000040000000005"
#define TOO_LARGE  "000000000100000000020000000003000000000400000000050"
//#define DEBUG //tests/shows usability of animalFarm

using namespace std;

int main() {
    cout << "Starting " << PROGRAM_TITLE << endl ;

    initialize();
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

    bool result ;
    result = addCat(new Cat( "Loki", MALE, PERSIAN, 1.0 ));
    if(!result) throw logic_error (PROGRAM_NAME ": addCat() failed");
    result = addCat(new Cat( "Milo", MALE, MANX , 1.1 )) ;
    result = addCat(new Cat( "Bella", FEMALE, MAINE_COON, 1.2 )) ;
    result = addCat(new Cat( "Kali", FEMALE, SHORTHAIR, 1.3 )) ;
    result = addCat(new Cat( "Trin", FEMALE, MANX, 1.4 )) ;
    result = addCat(new Cat( "Chili", MALE, SHORTHAIR, 1.5 )) ;
    assert(result);

#ifdef DEBUG
    cout << "TESTS:" << endl;

    Cat testCat = Cat();

    assert(testCat.getName() != nullptr );
    assert(strcmp(testCat.getName(), "") == 0);
    assert(testCat.getGender() == UNKNOWN_GENDER);
    assert(testCat.getBreed() == UNKNOWN_BREED);
    assert(testCat.isFixed() == false);
    assert(testCat.getWeight() == UNKNOWN_WEIGHT);
    assert(!testCat.isFixed());
    assert(!testCat.validate());
    assert(testCat.getName() != nullptr );

    try {
        testCat.setName(nullptr);
        //testCat.setName("");
        //testCat.setName("A");
        assert(false);
    } catch (exception const &e) {}
cout << "Name to nullptr test: PASS" << endl;
   try {
        testCat.setName("");
       //testCat.setWeight(2);
        assert(false);
    } catch (exception const &e) {}
   cout << "Empty Name Test: PASS" << endl;
 //   testCat.setName("");
    //try {
      //  testCat.setWeight(2);
        //assert(false); // We should never get here
    //} catch (exception const &e) {}

    try{
        testCat.setName("D");
        cout << "Single letter name test: PASS" << endl;
    } catch (exception const &e) {}

    try{
        testCat.setName(LARGE_NAME);
        cout << "30 Character name test: PASS" << endl;
    } catch (exception const &e) {}

    try {
        testCat.setName(TOO_LARGE);
        assert(false); // We should never get here
    } catch (exception const &e) {}

        cout << "Name too large test: PASS" << endl;

    try {
        testCat.setGender(FEMALE);
        cout << "Gender set test: PASS" << endl;
    } catch (exception const &e) {}

    try {
        testCat.setGender(MALE);
        assert(false);
    } catch (exception const &e) {}

        cout << "Change an existing gender test: PASS" << endl;

    try {
        testCat.setBreed(MAINE_COON);
        cout << "Set breed test: PASS" << endl;
    } catch (exception const &e) {}

    try {
        testCat.setBreed(MANX);
        assert(false);
    } catch (exception const &e) {}

        cout << "Change an existing bree test: PASS" << endl;

    try {
        testCat.fixCat();
        cout << "Fix cat test: PASS" << endl;
        assert(testCat.isFixed());
    } catch (exception const &e) {}

    try {
        testCat.setWeight(0);
        assert(false);
    } catch (exception const &e) {}

        cout << "Set weight to 0 test: PASS" << endl;

    try {
        testCat.setWeight(1.0 / 1024);
        cout << "Set weight to 1.0 / 1024 test: PASS" << endl;
        assert(testCat.getWeight() == 1.0 / 1024);
    } catch (exception const &e) {}

    try {
        assert(testCat.validate());
        cout << "Cat is valid test: PASS" << endl;

        Cat *bella = findCat("Bella");
        assert(bella != nullptr);
        assert(findCat("Bella's not here") == nullptr);

        assert(deleteCat(bella) == true);
        try {
            deleteCat(bella);
            bella = nullptr;

        } catch (exception const &e) {}
        cout << "Bella test: PASS" << endl;
        cout << "END OF TESTS" << endl;
        testCat.print();
        assert(!isCatPresent(&testCat)) ;
        //cout << "END OF TESTS" << endl;
    } catch (exception const &e) {}


    //bella = nullptr;

//    testCat.setName("");
  //  testCat.setName("A");
   // cout << "END OF TESTS" << endl;
#endif


    printAllCats(); //for confirming name changes
    //printf("DEBUG: ALL CAT INFO AFTER THIS SHOULD BE EMPTY\n");
    deleteAllCats();
    //printCat(0);
    //printCat(1); //confirms individual data has been deleted
    //printCat(2);
    printAllCats(); //confirms all cats have been deleted
    cout << "Done with " << PROGRAM_TITLE << endl ;
    //#endif
    return EXIT_SUCCESS;
}