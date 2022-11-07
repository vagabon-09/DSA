// In this program we will lear how to add Node at any position
#include <stdio.h>
#include <stdlib.h>
typedef struct doubely
{
    int data;
    struct doubely *next;
    struct doubley *prev;
} Node;

Node *head = NULL;
Node *last = NULL;
void display();
void createList(int value);
void insertAt(int item, int value);
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
    if (head == NULL)
    {
        head = newPtr;
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newPtr;
        newPtr->prev = ptr;
        last = newPtr;
    }
}

void display()
{
    Node *start;
    start = head;
    while (start != NULL)
    {
        printf("%d -> ", start->data);
        start = start->next;
    }
    printf("NULL");
}