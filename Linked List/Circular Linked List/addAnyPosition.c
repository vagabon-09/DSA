// In this program we will see how to add node at the any position
#include <stdio.h>
#include <stdlib.h>
typedef struct circular
{
    int data;
    struct circular *link;
} Node;

Node *head = NULL;
int index = 0;
void display();
void createList(int);
void circular();
void addAtAnyPosition(int, int);

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
            int position;
            while (1)
            {
                printf("Do you want ot add at anypositoin(Y/N) ?");
                scanf("%c", &choice);
                fflush(stdin);
                if (choice == 'y' || choice == 'Y')
                {
                    printf("Position: ");
                    scanf("%d", &position);
                    if (position > index || position < 0)
                    {
                        printf("Invalid positon \n");
                        break;
                    }
                    else if (position == 1)
                    {
                        printf("Add at beginning...\n");
                        break;
                    }
                    else if (position == index)
                    {
                        printf("Add at end..\n");
                        break;
                    }

                    else
                    {
                        printf("Enter item :");
                        scanf("%d", &data);
                        fflush(stdin);
                        addAtAnyPosition(data, position);
                    }
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

void addAtAnyPosition(int item, int position)
{
    int i = 1;
    Node *ptr, *nxtPtr, *newPtr;
    newPtr = (Node *)malloc(sizeof(Node));
    newPtr->data = item;
    ptr = head;
    while (ptr->link != NULL && i < position - 1)
    {
        ptr = ptr->link;
        i++;
    }
    nxtPtr = ptr->link;
    ptr->link = newPtr;
    newPtr->link = nxtPtr;
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
    index++;
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