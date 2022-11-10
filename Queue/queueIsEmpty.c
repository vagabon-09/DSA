// Is queue is empty - in this program we will learn how to know queue is empty or not
#include <stdio.h>
#include <stdlib.h>
typedef struct queue
{
    int data;
    struct queue *link;
} Node;

Node *head = NULL;
Node *last = NULL;
void display();
void createQueue(int);

int main()
{
    int data;
    char choice;
    while (1)
    {
        printf("Do you want to create a queue(Y/N)?");
        scanf("%c", &choice);
        fflush(stdin);
        if (choice == 'y' || choice == 'Y')
        {
            printf("Enter data: ");
            scanf("%d", &data);
            fflush(stdin);
            createQueue(data);
        }
        else
        {
            break;
        }
    }
    display();
}

void display()
{
    if (head == NULL && last == NULL)
    {
        printf("It is a empty queue");
    }
    else
    {
        printf("It is not a empty queue");
    }
}

void createQueue(int value)
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