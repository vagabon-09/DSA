// In this program we will learn how to create a circular linked list using singly linked list
#include <stdio.h>
#include <stdlib.h>
typedef struct circular
{
    int data;
    struct circular *link;
} Node;
Node *head = NULL;
void display();
void createList(int);
void circular();
int main()
{
    int data;
    char choice;
    while (1)
    {
        printf("Do you want to create a list(Y/N)");
        scanf("%c", &choice);
        fflush(stdin);
        if (choice == 'y' || choice == 'Y')
        {
            printf("Enter data: ");
            scanf("%d", &data);
            fflush(stdin);
            createList(data);
        }
        else
        {
            break;
        }
    }
    circular();
    display();
}

void createList(int value)
{
    Node *newPtr, *ptr;
    newPtr = (Node *)malloc(sizeof(Node));
    newPtr->data = value;
    newPtr->link = NULL;
    if (head == NULL)
    {
        head = newPtr;
    }
    else
    {
        ptr = head;
        while (ptr->link != NULL)
        {
            ptr = ptr->link;
        }
        ptr->link = newPtr;
    }
}

void circular()
{
    Node *ptr;
    ptr = head;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = head;
}

void display()
{
    Node *start;
    start = head;
    while (start->link != head)
    {
        printf("%d -> ", start->data);
        start = start->link;
    }
    printf("NULL");
}