#pragma once


typedef struct _LinkedList LinkedList;
struct _LinkedList {
    int info;
    LinkedList* next;
};


LinkedList* __LinkedList_create();

void __LinkedList_insert(LinkedList*, int);
LinkedList* __LinkedList_insertAt(LinkedList*, int, int);

LinkedList* front(LinkedList*);
LinkedList* back(LinkedList*);

int __LinkedList_size(LinkedList*);
