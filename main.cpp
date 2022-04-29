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

#include "config.h"
#include "Cat.h"

//#define PROGRAM_TITLE "Animal Farm"


#define LARGE_NAME "00000000010000000002000000000300000000040000000005"
#define TOO_LARGE  "000000000100000000020000000003000000000400000000050"
#define DEBUG //tests/shows usability of animalFarm

using namespace std;

int main() {
    cout << "Starting " << PROGRAM_TITLE << endl ;
    //SinglyLinkedList catDB ;
    ///catDB.push_front( new Cat( "Loki", Color::CREAM, true, Gender::MALE, 1.0 ) ) ;
    //catDB.push_front( new Cat( "Milo", Color::BLACK, true, Gender::MALE, 1.1 ) ) ;
    //catDB.push_front( new Cat( "Bella", Color::BROWN, true, Gender::FEMALE, 1.2 ) ) ;
    //catDB.push_front( new Cat( "Kali", Color::CALICO, true, Gender::FEMALE, 1.3 ) ) ;
    //catDB.push_front( new Cat( "Trin", Color::WHITE, true, Gender::FEMALE, 1.4 ) ) ;
    //catDB.insert_after(catDB.get_first(), new Cat( "Chili", Color::GINGER, true, Gender::MALE, 1.5 ) );
    //for( Animal* pAnimal = (Animal*)catDB.get_first() ; pAnimal != nullptr ; pAnimal = (Animal*)List::get_next( (Node*)pAnimal ) ) {
      //  cout << pAnimal->speak() << endl;
    //}
    //catDB.validate() ;
    //catDB.dump() ;
    //catDB.deleteAllNodes() ;
    //catDB.dump() ;
    cout << "Done with " << PROGRAM_TITLE ;
    return( EXIT_SUCCESS ) ;
}