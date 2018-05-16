#include "linear_list.h"

#include <iostream>


void listInfo(adt::LinearList& list) {
    std::cout << "List size: " << list.size() << std::endl;

    // Loop through the list.
    for (int i = 1; i <= list.size(); i++)
        std::cout << "List at index [" << i << "] = " << list.getItem(i) << std::endl;

    std::cout << "First element: " << list.front() << std::endl;
    std::cout << "Last element: " << list.back() << std::endl;
}


int main() {
    
    // Declares a new LinearList object.
    adt::LinearList list;
    
    // Insert five items at the end of the list.
    for (int i = 0; i < 5; i++)
        list.insertAt(i + 1, i);

    // Display the list info.
    listInfo(list);
    std::cout << "----------" << std::endl;


    // Clear the list
    list.clear();


    // List the details again.
    listInfo(list);

}
