// In this session we will learn about delete node from first of the list(doubely linked list)
#include <stdio.h>
#include <stdlib.h>
typedef struct doubely
{
    int data;
    struct doubely *prev;
    struct doubley *next;
} Node;

Node *Head = NULL;
void display();
void create_list(int value);
void deleteFirst();

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
            create_list(data);
        }
        else
        {
            while (1)
            {
                printf("Do you want to delete(Y/N)?");
                scanf("%c",&choice);
                fflush(stdin);
                if (choice == 'y' || choice == 'Y')
                {
                    deleteFirst();
                    fflush(stdin);
                }
                break;
            }

            break;
        }
    }
    display();
}

void create_list(int value)
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
    }
}

void deleteFirst()
{
    Node *newPtr;
    newPtr = Head;
    Head = Head->next;
    newPtr->next = NULL;
    free(newPtr);
}

void display()
{
    Node *ptr;
    ptr = Head;
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
}