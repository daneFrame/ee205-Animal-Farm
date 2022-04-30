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

#include "Color.h"
#include "config.h"
#include "Cat.h"
#include "SinglyLinkedList.h"
#include "List.h"

//#define PROGRAM_TITLE "Animal Farm"


#define DEBUG //tests/shows usability of animalFarm

using namespace std;

int main() {
    cout << "Starting " << PROGRAM_TITLE << endl ;
    SinglyLinkedList catDB;
    catDB.push_front(reinterpret_cast<Node *>(new Cat("Loki", Color::CREAM, true, Gender::MALE, 1.0))) ;
    catDB.push_front(reinterpret_cast<Node *>(new Cat("Milo", Color::BLACK, true, Gender::MALE, 1.1))) ;
    catDB.push_front(reinterpret_cast<Node *>(new Cat("Bella", Color::BROWN, true, Gender::FEMALE, 1.2))) ;
    catDB.push_front(reinterpret_cast<Node *>(new Cat("Kali", Color::CALICO, true, Gender::FEMALE, 1.3))) ;
    catDB.push_front(reinterpret_cast<Node *>(new Cat("Trin", Color::WHITE, true, Gender::FEMALE, 1.4))) ;
    catDB.insert_after(catDB.get_first(),
                       reinterpret_cast<Node *>(new Cat("Chili", Color::GINGER, true, Gender::MALE, 1.5)));
    for( Animal* pAnimal = (Animal*)catDB.get_first() ; pAnimal != nullptr ; pAnimal = (Animal*)List::get_next( (Node*)pAnimal ) ) {
      cout << pAnimal->speak() << endl;
    }
    catDB.validate() ;
    catDB.dump() ;
    catDB.deleteAllNodes() ;
    catDB.dump() ;
    cout << "Done with " << PROGRAM_TITLE ;
    return( EXIT_SUCCESS ) ;
}