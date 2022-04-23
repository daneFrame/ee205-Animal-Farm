///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Node.h
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   DAY_MON_YEAR
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include <iostream>
#include "config.h"

class Node {
    friend class List;
    friend class SinglyLinkedList;
virtual void dump() const{
    FORMAT_LINE_FOR_DUMP( "Node", "this" ) << this << std::endl ;
    FORMAT_LINE_FOR_DUMP( "Node", "next" ) << next << std::endl ;
}
virtual bool validate() const noexcept;
virtual bool operator>(const Node &rightSide);
static bool compareByAddress(const Node *node1, const Node *node2){
    if (node1>node2) {
        return true;
    }else{
        return false;
    }
}
};