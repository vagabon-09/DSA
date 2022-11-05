// In this code we will learn how to display a doubely linked list from last to first
#include <stdio.h>
#include <stdlib.h>
typedef struct singly
{
    int data;
    struct singly *next;
    struct sigly *prev;
} Node;

Node *Head = NULL;
Node *Last = NULL;
void create_list(int data);
void display();

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
            printf("Enter data: ");
            scanf("%d", &data);
            fflush(stdin);
            create_list(data);
        }
        else
        {
            break;
        }
    }
    display();
}

void create_list(int data)
{
    Node *newPtr, *ptr;
    newPtr = (Node *)malloc(sizeof(Node));
    newPtr->data = data;
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

void display(){
    Node *ptr;
    ptr = Last;
    while (ptr!=NULL)
    {
        printf("%d -> ",ptr->data);
        ptr = ptr->prev;
    }
    printf("NULL");
    
}