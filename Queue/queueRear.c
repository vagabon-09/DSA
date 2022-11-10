// In this program we will learn how to show the rear element from the queue rear program
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
void queueRear();
void createQueue(int);

int main()
{
    int data;
    char choice;
    while (1)
    {
        printf("Do you want to crate queue(Y/N)?");
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
    printf("Rear element of the queue is : ");
    queueRear();
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
        last = newptr;
    }
}

void queueRear()
{
    Node *rear;
    rear = last;
    printf("%d", rear->data);
}