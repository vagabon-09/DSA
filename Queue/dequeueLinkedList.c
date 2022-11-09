// We will see how to depueue from linked list queue
#include <stdio.h>
#include <stdlib.h>
typedef struct queue
{
    int data;
    struct queue *link;
} Node;

Node *front = NULL;
Node *last = NULL;
void display();
void enqueueLinkedList(int);
void dequeue();

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
            enqueueLinkedList(data);
        }
        else
        {
            while (1)
            {
                printf("Do you want to delete(Y/N)?");
                scanf("%c", &choice);
                fflush(stdin);
                if (choice == 'y' || choice == 'Y')
                {
                    dequeue();
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

void enqueueLinkedList(int value)
{
    Node *newptr, *ptr;
    newptr = (Node *)malloc(sizeof(Node));
    newptr->data = value;
    newptr->link = NULL;
    if (front == NULL)
    {
        front = newptr;
    }
    else
    {
        ptr = front;
        while (ptr->link != NULL)
        {
            ptr = ptr->link;
        }
        ptr->link = newptr;
        last = newptr;
    }
}

void display(){
    Node *newptr;
    newptr = front;
    while (newptr!=NULL)
    {
        printf("%d -> ",newptr->data);
        newptr=newptr->link;
    }
    
}

void dequeue()
{
    Node *dq;
    dq = front;
    front = front->link;
    dq->link = NULL;
    free(dq);
    printf("%d", front->data);
}