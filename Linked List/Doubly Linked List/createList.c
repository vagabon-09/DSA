#include <stdio.h>
#include <stdlib.h>
typedef struct doubely
{
    int value;
    struct doubely *prev;
    struct doubely *nex;
} Node;

Node *Head = NULL;
Node *Last = NULL;
void create_list(int value);
void display();
int main()
{
    int value;
    char choice;
    while (1)
    {
        printf("Do you want to create list(N/Y)?");
        scanf("%c", &choice);
        fflush(stdin);
        if (choice == 'y' || choice == 'Y')
        {
            printf("Enter value: ");
            scanf("%d", &value);
            fflush(stdin);
            create_list(value);
        }
        else
        {
            break;
        }
    }
    printf("Display start to last -> \n");
    display();
  
}

void create_list(int data)
{
    Node *newPtr, *ptr;
    newPtr = (Node *)malloc(sizeof(Node));
    newPtr->nex = NULL;
    newPtr->prev = NULL;
    newPtr->value = data;
    if (Head == NULL)
    {
        Head = newPtr;
    }
    else
    {
        ptr = Head;
        while (ptr->nex != NULL)
        {
            
            ptr = ptr->nex;
        }
        ptr->nex = newPtr;
        newPtr->prev = ptr;
        Last = newPtr;
    }
}

void display()
{
    Node *ptr;
    ptr = Head;
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->value);
        ptr = ptr->nex;
    }
    printf("NULL\n");
}

