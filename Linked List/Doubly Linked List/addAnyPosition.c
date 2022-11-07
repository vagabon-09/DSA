// In this program we will lear how to add Node at any position
#include <stdio.h>
#include <stdlib.h>
typedef struct doubely
{
    int data;
    struct doubely *next;
    struct doubley *prev;
} Node;

int index = 0;
Node *head = NULL;
Node *last = NULL;
void display();
void createList(int value);
void insertAt(int item, int value);
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
            printf("Enter value: ");
            scanf("%d", &data);
            fflush(stdin);
            createList(data);
        }
        else
        {
            int position, item;
            while (1)
            {
                printf("Do you want to insert value(Y/N)?");
                scanf("%c", &choice);
                fflush(stdin);
                if (choice == 'y' || choice == 'Y')
                {
                    printf("Enter position: ");
                    scanf("%d", &position);
                    printf("Enter item: ");
                    scanf("%d", &item);
                    fflush(stdin);
                    insertAt(item, position);
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
    index++;
    Node *newPtr, *ptr;
    newPtr = (Node *)malloc(sizeof(Node));
    newPtr->data = value;
    newPtr->next = NULL;
    newPtr->prev = NULL;
    if (head == NULL)
    {
        head = newPtr;
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newPtr;
        newPtr->prev = ptr;
        last = newPtr;
    }
}
void insertAt(int item, int n)
{
    int travers = 1;
    if (n > index)
    {
        printf("Invalid index\n");
        exit(0);
    }
    else if (n == 1)
    {
        printf("Add at beginning..\n");
    }
    else if (n == index)
    {
        printf("Add at end..\n");
    }
    else
    {
        Node *start, *newptr, *ptr;
        start = head;
        newptr = (Node *)malloc(sizeof(Node));
        newptr->data = item;
        while (start->next != NULL && travers < n - 1)
        {
            travers++;
            start = start->next;
        }
        ptr = start->next;
        start->next = newptr;
        newptr->next = ptr;
        ptr->prev = newptr;
        newptr->prev = start;
    }
}
void display()
{
    Node *start;
    start = head;
    while (start != NULL)
    {
        printf("%d -> ", start->data);
        start = start->next;
    }
    printf("NULL");
}