// In this program we will lear how to add node at the beginning of the circular linked list
#include <stdio.h>
#include <stdlib.h>
typedef struct circular
{
    int data;
    struct circular *link;
} Node;
Node *head = NULL;
void display();
void circular();
void insertBeginning(int);
void createList(int);
int main()
{
    int data;
    char choice;
    while (1)
    {
        printf("Do you want to create a list(Y/N)?");
        scanf("%c", &choice);
        fflush(stdin);
        if (choice == 'Y' || choice == 'y')
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

void circular(){
    Node *ptr;
    ptr = head;
    while (ptr->link!=NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = head;
    
}

void createList(int value)
{
    Node *newPtr, *ptr;
    newPtr = (Node *)malloc(sizeof(Node));
    newPtr->data = value;
    newPtr->link = NULL;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = newPtr;
}

void display()
{
    Node *ptr;
    ptr = head;
    while (ptr->link != head)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->link;
    }
}