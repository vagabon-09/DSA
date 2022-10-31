#include <stdio.h>
#include <stdlib.h>
typedef struct singly
{
    int data;
    struct singly *link;
} Node;

Node *Head = NULL;
void display();
void create_list(int value);
void delete_first();

int main()
{
    int value;
    char check;
    while (1)
    {
        printf("Do you want to create list(Y/N)?");
        scanf("%c", &check);
        fflush(stdin);
        if (check == 'Y' || check == 'y')
        {
            printf("Enter value: ");
            scanf("%d", &value);
            fflush(stdin);
            create_list(value);
        }
        else
        {
            while (1)
            {
                printf("Do you want to delete first(Y/N)?");
                scanf("%c", &check);
                fflush(stdin);
                if (check == 'y' || check == 'Y')
                {
                    delete_first();
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

void delete_first()
{
    Node *start;
    start = Head;
    Head = Head->link;
    start->link = NULL;
    free(start);
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
