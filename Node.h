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
#pragma once

#include <iostream>

#include "config.h"

class Node {
    friend class List;

    friend class SinglyLinkedList;

public:
    virtual void dump() const {
        FORMAT_LINE_FOR_DUMP("Node", "this") << this << std::endl;
        FORMAT_LINE_FOR_DUMP("Node", "next") << next << std::endl;
    }

    virtual bool validate() const noexcept {
        if (nullptr == next) {
            return true;
        }
        return false;
    }

protected:
    Node *next = nullptr;

    static bool compareByAddress(const Node *node1, const Node *node2);

    virtual bool operator>(const Node &rhs_Node) {
        return compareByAddress(this, &(Node &) rhs_Node);
    }
};

