///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Node.h
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   24_APR_2022
///////////////////////////////////////////////////////////////////////////////
#include <iostream>

#include "config.h"


class Node {
friend class List;
friend class SinglyLinkedList;

public:
    virtual void dump() const;
    virtual bool validate() const noexcept;
    virtual bool operator>(const Node &rightSide);

protected:
    Node* next = nullptr;
    static bool compareByAddress(const Node *node1, const Node *node2);
};

