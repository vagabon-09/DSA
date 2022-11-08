// In this program we will learn how to delete node from first of the Node
#include <stdio.h>
#include <stdlib.h>
typedef struct circular
{
    int data;
    struct circular *link;
} Node;

Node *head = NULL;
void display();
void createList(int);
void deleteFirst(int);
void circular();

int main()
{
    int data;
    char choice;
    while (1)
    {
        printf("Do you want to crete list(Y/N)?");
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
                printf("Do you want to insert first(y/N)");
                scanf("%c",&choice);
                fflush(stdin);
                if (choice == 'Y' || choice == 'y')
                {
                    printf("Enter data:");
                    scanf("%d",&data);
                    fflush(stdin);
                    deleteFirst(data);
                }else
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
void deleteFirst(int value2)
{
    Node *newptr;
    newptr = (Node *)malloc(sizeof(Node));
    newptr->data = value2;
    newptr->link = head;
    head = newptr;
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
void createList(int value)
{
    Node *ptr, *newPtr;
    newPtr = (Node *)malloc(sizeof(Node));
    newPtr->data = value;
    newPtr->link = NULL;
    if (head == NULL)
    {
        head = newPtr;
    }
    else
    {
        ptr = head;
        while (ptr->link != NULL)
        {
            ptr = ptr->link;
        }
        ptr->link = newPtr;
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