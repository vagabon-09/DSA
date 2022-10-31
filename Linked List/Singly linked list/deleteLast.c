#include <stdio.h>
#include <stdlib.h>
typedef struct singly
{
    int data;
    struct singly *link;
} Node;

Node *Head = NULL;
void create_list(int value);
void display();
void delete_last();

int main()
{
    int value;
    char check;
    while (1)
    {
        printf("Do you want to create a list(Y/N)?");
        scanf("%c", &check);
        fflush(stdin);
        if (check == 'Y' || check == 'y')
        {
            printf("Add Value: ");
            scanf("%d", &value);
            create_list(value);
            fflush(stdin);
        }
        else
        {
            while (1)
            {
                printf("Do you want to delete (Y/N)?");
                scanf("%c", &check);
                fflush(stdin);
                if (check == 'y' || check == 'Y')
                {
                    delete_last();
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
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->link;
    }
    printf("NULL");
}

void delete_last()
{
    Node *ptr, *Secondlast, *last;
    ptr = Head;
    while (ptr->link != NULL)
    {
        Secondlast = ptr;
        last = ptr->link;
        ptr = ptr->link;
    }

    if (Secondlast == Head)
    {
        printf("It's already empty!");
    }
    else
    {
        Secondlast->link = NULL;
        free(last);
    }
}