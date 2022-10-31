#include <stdio.h>
typedef struct singly
{
    int data;
    struct singly *link;
} Node;

Node *Head = NULL;
void display();
void create_list(int value);
void add_beginning(int value2);
int main()
{
    while (1)
    {
        int value;
        char check;
        printf("Do you want to create a list(Y/N)?");
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
                printf("Do you want to add Beginning (Y/N)?");
                scanf("%c", &check);
                fflush(stdin);
                if (check == 'y' || check == 'Y')
                {
                    printf("Enter value: ");
                    scanf("%d", &value);
                    add_beginning(value);
                    fflush(stdin);
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

void add_beginning(int value2)
{
    Node * newPtr1;
    newPtr1 = (Node*)malloc(sizeof(Node));
    newPtr1 ->data = value2;
    newPtr1 ->link = Head;
    Head = newPtr1;
}

void display()
{
    Node *start;
    start = Head;
    while (start)
    {
        printf("%d -> ", start->data);
        start = start->link;
    }
    printf("NULL");
}