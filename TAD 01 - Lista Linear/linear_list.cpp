/** 
 *  @file       linear_list.h
 *  @author     Brendon Pagano (annatsu)
 *  @date       05/15/2018
 *  @version    1.0
 *  
 *  @brief      A Linear List ADT implementation file.
 *
 */

#include "linear_list.h"


namespace adt {

    LinearList::LinearList() {

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

}
