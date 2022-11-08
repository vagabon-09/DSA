// In this program we will learn how to add Node at the end of the circular linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct circular
{
    int data;
    struct circular *link;
} Node;

Node *head = NULL;
Node *last = NULL;
void createList(int);
void addLast(int);
void circular();
void display();

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
            printf("Enter data: ");
            scanf("%d", &data);
            fflush(stdin);
            createList(data);
        }
        else
        {
            while (1)
            {
                printf("Add at the last (Y/N)?");
                scanf("%c", &choice);
                fflush(stdin);
                if (choice == 'y' || choice == 'Y')
                {
                    printf("insert value: ");
                    scanf("%d", &data);
                    fflush(stdin);
                    addLast(data);
                }
                else
                {
                    break;
                }
            }

            break;
        }
    }
    circular();
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
        last = newptr;
    }
}

void display()
{
    Node *ptr;
    ptr = head;
    while (ptr->link != head)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->link;
    }
    printf("%d", ptr->data);
}

void addLast(int value2)
{
    Node *l;
    l = (Node *)malloc(sizeof(Node));
    l->data = value2;
    l->link = NULL;
    last->link = l;
    last = l;
}

void circular()
{
    Node *ptr;
    ptr = head;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = head;
}