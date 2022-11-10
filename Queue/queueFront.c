// In this program we will see how to print first element of the queue
#include <stdio.h>
#include <stdlib.h>
typedef struct queue
{
    int data;
    struct queue *link;
} Node;

Node *head = NULL;
void display();
void createQueue(int);
void queueFront();

int main()
{
    int data;
    char choice;
    while (1)
    {
        printf("Do you want to create list(Y/N) ?");
        scanf("%c", &choice);
        fflush(stdin);
        if (choice == 'y' || choice == 'Y')
        {
            printf("Enter data:");
            scanf("%d", &data);
            createQueue(data);
            fflush(stdin);
        }
        else
        {
            break;
        }
    }
    display();
    printf("Showing the Front of the queue..\n");
    queueFront();
}

void createQueue(int data)
{
    Node *newptr, *ptr;
    newptr = (Node *)malloc(sizeof(Node));
    newptr->data = data;
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

void display(){
    Node *start;
    start = head;
    while (start!=NULL)
    {
        printf("%d -> ",start->data);
        start = start->link;
    }
    printf("NULL\n");
    
}

void queueFront(){
    Node *start;
    start = head;
    printf("%d",start->data);
}