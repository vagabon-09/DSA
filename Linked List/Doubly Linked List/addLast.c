// In this code we will lear how to Add node at the last of the list
#include <stdio.h>
#include <stdlib.h>
typedef struct doubely
{
    int data;
    struct doubely *next;
    struct doubely *prev;
} Node;

Node *Head = NULL;
Node *Last = NULL;
void display();
void createList(int value);
void addLast(int value2);
int main()
{
    int data;
    char choice;
    while (1)
    {
        printf("Do you want to create list(Y/N)?");
        scanf("%c", &choice);
        fflush(stdin);
        if (choice == 'y' || choice == 'Y')
        {
            printf("Enter value: ");
            scanf("%d", &data);
            fflush(stdin);
            createList(data);
        }
        else
        {
            while (1)
            {
                printf("Do you want to add last(Y/N)?");
                scanf("%c", &choice);
                fflush(stdin);
                if (choice == 'y' || choice == 'Y')
                {
                    printf("Enter value: ");
                    scanf("%d", &data);
                    addLast(data);
                    fflush(stdin);
                }
                else
                {
                    break;
                }
            }

            break;
        }
    }
    display();
}

void createList(int value)
{
    Node *newPtr, *ptr;
    newPtr = (Node *)malloc(sizeof(Node));
    newPtr->data = value;
    newPtr->next = NULL;
    newPtr->prev = NULL;
    if (Head == NULL)
    {
        Head = newPtr;
    }
    else
    {
        ptr = Head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newPtr;
        newPtr->prev = ptr;
        Last = newPtr;
    }
}

void addLast(int value2)
{
    Node *newPtr, *ptr;
    ptr = Last;
    newPtr = (Node *)malloc(sizeof(Node));
    newPtr->data = value2;
    newPtr->next = NULL;
    newPtr->prev = Last;
    ptr->next = newPtr;
    Last = newPtr;
}

void display()
{
    Node *start;
    start = Head;
    while (start != NULL)
    {
        printf("%d -> ", start->data);
        start = start->next;
    }
    printf("NULL");
}