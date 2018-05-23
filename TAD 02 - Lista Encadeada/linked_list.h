#pragma once


typedef struct {
    int info;
    LinkedList* next;
} LinkedList;


void __LinkedList_create();

int __LinkedList_size();