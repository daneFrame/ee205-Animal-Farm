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
#define DEBUG //tests/shows usability of animalFarm

using namespace std;

int main() {
    cout << "Starting " << PROGRAM_TITLE << endl ;

    initialize();


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

        assert(false);
    } catch (exception const &e) {}
cout << "Name to nullptr test: PASS" << endl;
   try {
        testCat.setName("");
       //testCat.setWeight(2);
        assert(false);
    } catch (exception const &e) {}
   cout << "Empty Name Test: PASS" << endl;

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
        assert(false);
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

#endif



    cout << "Done with " << PROGRAM_TITLE << endl ;
    //#endif
    return EXIT_SUCCESS;
}