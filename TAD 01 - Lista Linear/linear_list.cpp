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

    }



    // Private Methods

    void LinearList::determineLength() {
        // When the limit pointers are both set to -1, this means that the
        // list is empty, or it has been cleared.
        length = (arrStart != -1 && arrEnd != -1)
            ? arrEnd - arrStart
            : 0;
    }

}
