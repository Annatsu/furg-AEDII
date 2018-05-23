/** 
 *  @file       linked_list.h
 *  @author     Brendon Pagano (annatsu)
 *  @date       05/22/2018
 *  @version    1.0
 *  
 *  @brief      A Linked List ADT header file.
 *
 */

#pragma once


#include "node.h"


namespace adt {

    /**
     * 
     */
    class LinkedList {

        public:

            /**
             * @brief   LinkedList's default class constructor.
             */
            LinkedList();


            /**
             * @brief   Inserts an element at a given position in the list.
             * 
             * @param   pos an integer representing the location inside the list to place that element
             * @param   item the number to insert at the position
             * @return  1 if the element was inserted, 0 otherwise
             */
            int insertAt(int pos, int item);


            /**
             * @brief   Removes an element from the list at a specific position.
             * 
             * @param   pos an integer that defines where to remove the element
             * @return  the removed element
             */
            int removeAt(int pos);


            /**
             * @brief   Clear the entire list, removing all of its elements.
             * 
             * @return  1 if the list was successfully cleared, 0 otherwise.
             */
            int clear();


            /**
             * @brief   Access the list's first element.
             * 
             * @return  int
             */
            int front();


            /**
             * @brief   Access the list's last element.
             * 
             * @return  int
             */
            int back();


            /**
             * @brief   Access a specified element with bounds checking.
             * 
             * @return  the item at the provided position.
             */
            int getItem(int pos);


            /**
             * @brief   The number of elements inside the list.
             * 
             * @return  int
             */
            int size();


        public:

            /**
             * @brief   Return value of any method that fails.
             * 
             * As an error flag, 0 was chosen because it's implicitly converted to false in a condition.
             */
            static const int ERROR = 0;


        private:

            // The first node of the linked list, will hold a reference to every node after it.
            Node list;

            // An integer to keep track of the list's size without having to go through the list every time.
            int size;

    };

}
