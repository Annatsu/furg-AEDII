#include "linear_list.h"

#include <iostream>


int main() {
    
    // Declares a new LinearList object.
    adt::LinearList list;


    // Insert an item at the beginning of the list.
    list.insertAt(1, 12);

    // Check if the size is 1
    std::cout << list.size() << std::endl;

}