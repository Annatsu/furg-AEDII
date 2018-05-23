#include <iostream>

#include "linked_list.h"



void print(const char* string) {
    std::cout << string << std::endl;
}


int main() {

    adt::LinkedList list;


    print("Should print the first element of the list");
    std::cout << list.front() << std::endl;

}