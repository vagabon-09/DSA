// In this program we will learn how to create a stack using linked list
#include <stdio.h>
#include <stdlib.h>
typedef struct stack
{
    int data;
    struct stack *next;
    struct stack *prev;
} Node;

Node *head = NULL;
Node *last = NULL;
void createStack(int data);
void display();

int main()
{
    int data;
    char choice;
    while (1)
    {
        printf("Do you want to create a stack(Y/N)?");
        scanf("%c", &choice);
        fflush(stdin);
        if (choice == 'y' || choice == 'y')
        {
            printf("PUsh data: ");
            scanf("%d", &data);
            fflush(stdin);
            createStack(data);
        }
        else
        {
            break;
        }
    }
    display();
}

void createStack(int data)
{
    Node *newptr, *ptr;
    newptr = (Node *)malloc(sizeof(Node));
    newptr->data = data;
    newptr->next = NULL;
    newptr->prev = NULL;
    if (head == NULL)
    {
        head = newptr;
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newptr;
        newptr->prev = ptr;
        last = newptr;
    }
}

void display()
{

    Node *start;
    start = last;
    while (start != NULL)
    {
        printf("%d ", start->data);
        start = start->prev;
    }
   
}