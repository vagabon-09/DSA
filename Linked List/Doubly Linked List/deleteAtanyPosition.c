// In this program we will see how to delete node at any position
#include <stdio.h>
#include <stdlib.h>
typedef struct dboubely
{
    int data;
    struct doubely *next;
    struct doubely *prev;
} Node;

Node *head = NULL;
Node *last = NULL;

void display();
void create_list(int value);
// void delete_any();

int index = 0;

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
            create_list(data);
            fflush(stdin);
        }
        else
        {
            break;
        }
    }
    display();
}

void create_list(int value)
{
    index++;
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
    Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
    printf("Index is %d", index);
}