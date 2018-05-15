#pragma once


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
             * @return  1 if the element was inserted, 0 otherwise.
             */
            char insertAt(int pos);


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
             * @return int
             */
            int size();

    };

}
