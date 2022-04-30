///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.cpp
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   24_APR_2022
///////////////////////////////////////////////////////////////////////////////
#include <cassert>
#include <iostream>
#include <stdexcept>
#include <iomanip>

#include "Node.h"
#include "config.h"
#include "SinglyLinkedList.h"
#include "List.h"

using namespace std;

void SinglyLinkedList::dump() const noexcept{
    std::cout<< "SinglyLinkedList:  head=[" << head << std::endl;
    if (head != nullptr){
        Node* dumpedNode = head;
        PRINT_HEADING_FOR_DUMP;
for(int i=0; i < size();i++ ){
dumpedNode->dump();
dumpedNode->next;
}
    }
}

Node *SinglyLinkedList::pop_front() noexcept {
    Node* firstNode = head;
    if (head != nullptr){
head = head->next;
count--;
return firstNode;
}else{
        return firstNode = nullptr;
    }
}

void SinglyLinkedList::insert_after(Node *currentNode, Node *newNode) {
    *newNode = *currentNode->next;
}

void SinglyLinkedList::push_front(Node *newNode) {
if(newNode == nullptr || head == nullptr){
    std::cout << "Invalid Argument: newNode points to null." << std::endl;
    return;
}
if(!validate()) {
    std::cout << "Domain Error: newNode is not valid" << std::endl;
    return;
}
if(newNode->next == newNode){
    std::cout << "Logic Error: newNode is already in container" << std::endl;
    return;
}
newNode->next = head;
head = newNode;
}

bool validate() noexcept{

}