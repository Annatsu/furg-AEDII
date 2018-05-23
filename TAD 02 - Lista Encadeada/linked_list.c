#include <stdio.h>

#include "linked_list.h"


LinkedList* __LinkedList_create() {
    return NULL;
}


LinkedList* __LinkedList_insert(LinkedList* list, int info) {
    if (list == NULL) {
        list->next = __LinkedList_create();
        list->info = info;
        return list;
    } else
        return __LinkedList_insert(list->next, info);
}


LinkedList* __LinkedList_insertAt(LinkedList* list, int pos, int info) {
    
}


int __LinkedList_size(LinkedList* list) {
    if (list == NULL)
        return 0;
    else
        return __LinkedList_size(list->next);
}





int main() {

    LinkedList* list = __LinkedList_create();


    for (int i = 0; i < 10; i++)
        __LinkedList_insert(list, i);


    printf("List size: %d", __LinkedList_size(list));

}
