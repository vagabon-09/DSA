#include <stdio.h>
#include <stdlib.h>
typedef struct PolyNomial
{
    int coficient;
    int exponent;
    struct polyNomial *link;
} Node;

Node *head = NULL;

void display();
void createNode(int, int);

int main()
{
    while (1)
    {
        char choice;
        int dataC;
        int dataX;
        printf("Do you want to make a polynomial representation(Y/N)?");
        scanf("%c", &choice);
        fflush(stdin);
        if (choice == 'y' || choice == 'Y')
        {
            printf("Enter Coficient: ");
            scanf("%d", &dataC);

            printf("Enter exponent: ");
            scanf("%d", &dataX);
            createNode(dataC, dataX);
            fflush(stdin);
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
    Node *ptr;
    ptr = head;

    while (ptr != NULL)
    {
        printf("(%d", ptr->coficient);
        printf("X^%d)", ptr->exponent);
        ptr = ptr->link;
        if (ptr != NULL)
        {
            printf(" + ");
        }
    }
}

void createNode(int coficient, int exponent)
{
    Node *ptr, *newptr;
    ptr = (Node *)malloc(sizeof(Node));
    ptr->coficient = coficient;
    ptr->exponent = exponent;
    ptr->link = NULL;
    if (head == NULL)
    {
        head = ptr;
    }
    else
    {
        newptr = head;
        while (newptr->link != NULL)
        {
            newptr = newptr->link;
        }
        newptr->link = ptr;
    }
}