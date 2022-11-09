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
void createQueue(int);
void enqueue(int);

int main()
{
    int data;
    char choice;
    while (1)
    {
        printf("Do you want to create a Queue(y/n)?");
        scanf("%c", &choice);
        fflush(stdin);
        if (choice == 'y' || choice == 'Y')
        {
            printf("Enter data:");
            scanf("%d", &data);
            fflush(stdin);
            createQueue(data);
        }
        else
        {
            break;
        }
    }
    display();
}

void createQueue(int data)
{
    Node *newptr, *ptr;
    newptr = (Node *)malloc(sizeof(Node));
    newptr->data = data;
    newptr->link = NULL;
    if (front == NULL)
    {
        front = newptr;
    }
    else
    {
        ptr = front;
        while (ptr->link != NULL)
        {
            ptr = ptr->link;
        }
        ptr->link = newptr;
    }
}

void display()
{
    Node *ptr;
    ptr = front;
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->link;
    }
    printf("NULL");
}