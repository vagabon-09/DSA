// In this program we will see how make a pop method using linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int data;
    struct stack *link;
} Node;

void display();
void createList(int data);
void pop();

Node *head = NULL;

int main()
{
    int data;
    char choice;
    while (1)
    {
        printf("Do you want to create stack(Y/N)?");
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
            while (1)
            {
                printf("Do you want to pop(Y/N)?");
                scanf("%c", &choice);
                fflush(stdin);
                if (choice == 'y' || choice == 'Y')
                {
                    pop();
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
    Node *newptr, *ptr;
    newptr = (Node *)malloc(sizeof(Node));
    newptr->data = value;
    newptr->link = NULL;
    if (head == NULL)
    {
        head = newptr;
    }
    else
    {
        ptr = head;
        while (ptr->link != NULL)
        {
            ptr = ptr->link;
        }
        ptr->link = newptr;
    }
}

void pop()
{
    Node *pop;
    pop = head;
    while (pop->link->link != NULL)
    {
        pop = pop->link;
    }

    pop->link = NULL;
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