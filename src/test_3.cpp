#include <stdio.h>
#include <stdlib.h>

typedef struct list {
    node *head;
    node *tail;
    int number_of_nodes;
} List;

typedef struct queue {
    List *ptr_list;
} Queue;

void list_initialize(List *ptr_list) {
    //TODO
    printf("hello in list_initialize\n");
    if (ptr_list) {
        ptr_list->head = 0;
        printf("hello\n");
        ptr_list->tail = 0;
        printf("hello\n");
        ptr_list->number_of_nodes = 0;
    }
    printf("hello after list_initialize\n");
}

void queue_initialize(Queue *queue_list) {
    printf("hello inside queue_initialize\n"); 
    if (queue_list) {
        queue_list->ptr_list = malloc(sizeof(List));
        list_initialize(queue_list->ptr_list);
    }
    printf("hello after queue_initialize\n");
}