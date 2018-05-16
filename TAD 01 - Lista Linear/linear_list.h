/** 
 *  @file       linear_list.h
 *  @author     Brendon Pagano (annatsu)
 *  @date       05/15/2018
 *  @version    1.0
 *  
 *  @brief      A Linear List ADT header file.
 *
 */

#pragma once


#define LINEAR_LIST_CAPACITY 10



namespace adt {

    /**
     * @brief   An implementation of the List Abstract Data Type (ADT).
     * 
     * This implementation uses an array allocated upon the class's constructor call,
     * not a linked list.
     */
    class LinearList {

        public:

            /**
             * @brief   LinearList class's default constructor.
             */
            LinearList();


            /**
             * @brief   Inserts an element at a given position in the list.
             * 
             * @param   pos an integer representing the location inside the list to place that element
             * @param   item the number to insert at the position
             * @return  1 if the element was inserted, 0 otherwise
             */
            char insertAt(int pos, int item);


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
            char clear();


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

            // As an error flag, 0 was chosen because it's implicitly converted to false in a condition.
            static const int error_symbol = 0;


        private:

            // arrStart and arrEnd will be set to this whenever the list is empty.
            static const char empty_list_limit = -1;

            // We want the starting position for the arrStart to be at the middle of the underlying array,
            // as this will provide us with faster manipulation of elements when inserting at the back and
            // at the front.
            static const int arr_start_position = LINEAR_LIST_CAPACITY / 2;

            // The max number of items the list can possess.
            static const int arr_max_capacity = LINEAR_LIST_CAPACITY;


        private:

            // An integer that points to the start of the array.
            int arrStart = -1;

            // An integer that points to the end of the array.
            int arrEnd = -1;

            // Keeps track of the array length.
            int length = 0;

            // The array where the list elements will be inserted at.
            int storage[LINEAR_LIST_CAPACITY];


        private:

            /**
             * @brief   Recalculates the length member variable.
             * 
             * @return  void
             */
            void determineLength();

            /**
             * @brief   Creates a 'hole' inside the storage array, in order to insert a new element inside it.
             * 
             * @param   pos the position to create a 'hole' at
             * @return  int
             */
            int createInsertionPointAt(int pos);

    };

}



#undef LINEAR_LIST_CAPACITY
