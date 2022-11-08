// In this program we will learn how to delete node from first of the Node
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
void deleteFirst();
void circular();

int main()
{
    int data;
    char choice;
    while (1)
    {
        printf("Do you want to crete list(Y/N)?");
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
    display();
}

void createList(int value)
{
    Node *ptr, *newPtr;
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

void display()
{
    Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->link;
    }
    
}