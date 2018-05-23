/** 
 *  @file       linked_list.cpp
 *  @author     Brendon Pagano (annatsu)
 *  @date       05/23/2018
 *  @version    1.0
 *  
 *  @brief      A Linked List ADT implementation file.
 *
 */


#include "linked_list.h"



namespace adt {

    // Constructors

    LinkedList::LinkedList() :
        list({ 0, nullptr }),
        length(0) {}


    // Public methods

    int LinkedList::front() {
        return list.info;
    }

}