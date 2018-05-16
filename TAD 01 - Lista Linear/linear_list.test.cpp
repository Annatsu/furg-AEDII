#include "linear_list.h"

#include <iostream>


int main() {
    
    // Declares a new LinearList object.
    adt::LinearList list;


    // Insert five items at the end of the list.
    for (int i = 0; i < 5; i++)
        list.insertAt(i + 1, i);

    // Check if the size is 5
    std::cout << "List size: " << list.size() << std::endl;



    // Loop through the list. Should print: range(0, 4)
    for (int i = 1; i <= list.size(); i++)
        std::cout << list.getItem(i) << std::endl;

}
