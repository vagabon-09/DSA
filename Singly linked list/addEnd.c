#include <stdio.h>
#include <stdlib.h>
typedef struct singly
{
    int data;
    struct singly *link;
} Node;

Node *Head = NULL;
void display();
void crete_list(int value);
void add_list(int value);

int main()
{
    char check;
    int value;

    while (1)
    {

        printf("Do you want to create list(Y/N)?");
        scanf("%c", &check);
        fflush(stdin);
        if (check == 'y' || check == 'Y')
        {
            printf("Enter Value: ");
            scanf("%d", &value);
            fflush(stdin);
            create_list(value);
        }
        else
        {
            while (1)
            {
                printf("Do you want to add End(Y/N)?");
                scanf("%c", &check);
                fflush(stdin);
                if (check == 'y' || check == 'Y')
                {
                    printf("Enter Value: ");
                    scanf("%d", &value);
                    fflush(stdin);
                    add_end(value);
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

void create_list(int value)
{
    Node *newptr, *ptr;
    newptr = (Node *)malloc(sizeof(Node));
    newptr->data = value;
    newptr->link = NULL;
    if (Head == NULL)
    {
        Head = newptr;
    }
    else
    {
        ptr = Head;
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
    ptr = Head;
    while (ptr)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->link;
    }
    printf("NULL");
}

void add_end(int value)
{

    Node *ptr, *start;
    start = Head;
    ptr = (Node *)malloc(sizeof(Node));
    ptr->data = value;
    ptr->link = NULL;
    while (start->link != NULL)
    {
        start = start->link;
    }
    start->link = ptr;
}