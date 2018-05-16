/** 
 *  @file       linear_list.cpp
 *  @author     Brendon Pagano (annatsu)
 *  @date       05/15/2018
 *  @version    1.0
 *  
 *  @brief      A Linear List ADT implementation file.
 *
 */

#include "linear_list.h"

#include <cmath>


namespace adt {

    // Constructors

    LinearList::LinearList() {}



    // Public Methods

    char LinearList::insertAt(int pos, int item) {
        // Bound checking for errors.
        if (
            (pos != 1 && length == 0) ||
            (pos > length + 1) ||
            (pos < 1) ||
            (length >= LinearList::arr_max_capacity)
        )
            return LinearList::error_symbol;


        // Declare the insertion point, to be modified below.
        int insertionPoint = -1;


        // If the length is 0, then there's no item inserted, and it must behave a little differently.
        if (length == 0) {
            // Set the underlying array limits.
            arrStart = LinearList::arr_start_position;
            arrEnd = LinearList::arr_start_position;

            insertionPoint = LinearList::arr_start_position;
        } else if (pos <= length) {

        } else {
            // In this case, the insertion will occur at the end, so we just
            // increment the end limit pointer and insert the item there.
            insertionPoint = ++arrEnd;
        }


        // Determines the new list length.
        determineLength();

        // Insert the item on the insertion point.
        storage[insertionPoint] = item;

        return 1;
    }


    int LinearList::front() {
        return getItem(1);
    }


    int LinearList::back() {
        return getItem(length);
    }


    int LinearList::getItem(int pos) {
        // If there's an error upon boundary checking, return an error flag.
        if (pos < 1 || pos > length + 1)
            return LinearList::error_symbol;
        
        return storage[arrStart + pos - 1];
    }


    char LinearList::clear() {
        // Because of bound checking on every get, we can just reset the limit pointers.
        // This ensures a faster clear algorithm.
        arrStart = (int) LinearList::empty_list_limit;
        arrEnd = (int) LinearList::empty_list_limit;
        determineLength();
    }


    int LinearList::size() {
        return length;
    }



    // Private Methods

    void LinearList::determineLength() {
        // When the limit pointers are both set to -1, this means that the
        // list is empty, or it has been cleared.
        length = (
            arrStart != (int) LinearList::empty_list_limit &&
            arrEnd != (int) LinearList::empty_list_limit
        )
            ? arrEnd - arrStart + 1
            : 0;
    }


    int LinearList::createInsertionPointAt(int pos) {
        // Where the for loop will start.
        int start;

        // The number of operations needed to reallocate the array.
        int operations;

        // Depending on the location of the pos param, this could be 1 or -1.
        int step;


        // Check if the position is at the middle or at the left half of the array.
        if (pos <= (int) ceil(length / 2)) {

            // If there's no space to the left, return an error.
            if (arrStart - 1 < 0)
                return LinearList::error_symbol;

            start = arrStart--;
            operations = pos;
            step = -1;
        } else {

            // If there's no space to the right, return an error.
            if (arrEnd + 1 >= LinearList::arr_max_capacity)
                return LinearList::error_symbol;

            start = arrEnd++;
            operations = length - pos + 1;
            step = 1;
        }


        // Loop through the array operation number of times, rearranging it's values.
        for (int i = 0; i < operations; i++)
            storage[start + (i * -step) + step] = storage[start + (i * -step)];


        // Returns 1 to say everything's fine.
        return 1;
    }

}
