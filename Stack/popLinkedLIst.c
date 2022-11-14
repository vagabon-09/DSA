// In this program we will see how to do pop operation usin a linked list
#include <stdio.h>
#include <stdlib.h>
typedef struct stack
{
    int data;
    struct stack *link;
} Node;

Node *head = NULL;
Node *last = NULL;

void display();
void push(int);
int main()
{
    int data;
    char choice;
    while (1)
    {
        printf("Do you want to create a list(Y/N) ?");
        scanf("%c", &choice);
        fflush(stdin);
        if (choice == 'y' || choice == 'y')
        {
            printf("Enter data: ");
            scanf("%d", &data);
            fflush(stdin);
            push(data);
        }
        else
        {

            break;
        }
    }
    display();
}

void push(int value)
{
    Node *ptr, *newptr;
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

void display(){
    Node *newptr;
    newptr = head;
    while (newptr!=NULL)
    {
        printf("%d -> ",newptr->data);
        newptr = newptr->link;
    }
}