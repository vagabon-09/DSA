// In this program we will learn how to create a queue using linked list
#include <stdio.h>
#include <stdlib.h>
typedef struct queue
{
    int data;
    struct queue *link;
} Node;

Node *front = NULL;
Node *read = NULL;

void display();
void createList(int);
void enqueue(int);