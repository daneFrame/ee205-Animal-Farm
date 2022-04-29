///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file List.cpp
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   24_APR_2022
///////////////////////////////////////////////////////////////////////////////
#include <stdexcept>
#include <cassert>

#include "List.h"
#include "Node.h"


unsigned int List::size() noexcept {
    if(head==nullptr){
        return count = 0;
    }
    Node* countingNode = head;
    while(countingNode != nullptr){
        countingNode->next;
        count++;
    }
    return count;
}

//void List::dump() const noexcept {}

//bool List::validate() const noexcept {
//}

bool List::empty() const noexcept {
    if(head == nullptr)
        return true;
}

void List::deleteAllNodes() noexcept {
    assert( validate() );
    while( head != nullptr ) {
        pop_front();
    }
#ifdef DEBUG
    cout << PROGRAM_NAME << ": All Nodes have been deleted" << endl ;
#endif
    assert( validate() );
}

int *List::get_first() const noexcept {
    if(empty()){
        return nullptr;
    }else{
        return head;
    }
}

int *List::get_next(const int *currentNode) {
    if(currentNode == nullptr){
        throw std::invalid_argument("invalid_argument");
    }else{
        return currentNode->next;
    }
}

bool List::isIn(Node *aNode) const {}

bool List::isSorted() const noexcept {}

///int *List::pop_front() noexcept {
   /// head = head->next;
///}