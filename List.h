#pragma once

#include <stdio.h>
#include <stdbool.h>


struct node_t{
    struct node_t* next;
    struct node_t* prev;
    int hash;
    int page; // page number
};

struct list_t{
    struct node_t* front_elem;
    struct node_t* back_elem;
    int size;
};

//init list of the selected size
struct list_t* Init_List(int size);

//access the first element
struct node_t* Front_Elem(struct list_t* list);

//access the last element
struct node_t* Back_Elem(struct list_t* list);

//access to the element by page
struct node_t* Page_Elem(struct list_t* list);

//access to the element by hash
struct node_t* Hash_Elem(struct list_t* list);

//check whether the underlying container is empty
bool Is_Empty (struct list_t* list);

//returns the number of elements
size_t Size_List (struct list_t* list);

//add elem in the end of the list, top of the list deleted
void Push_Back(struct list_t* list, int page, int hash);

//add elem in the top of the list, end of the list deleted
void Push_Front(struct list_t* list, int page , int hash);

//add elem in the top of the list1 an, end of the list moves to the top of the list2
void Exchange_Elem(struct list_t* list1, struct list_t* list2, int page, int hash);

//delete elem in the end
void Pop_Back (struct list_t* list);

//delete elem in the top
void Pop_Front (struct list_t* list);

//delete elem by page
void Delete_by_Page(struct list_t* list, int page);

//delete elem by hash
void Delete_by_Hash(struct list_t* list, int hash);

//free list
void Free_List (struct list_t* list);