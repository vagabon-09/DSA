#include <stdio.h>
typedef struct singly
{
    int value;
    struct singly *link;
} Node;

Node *Head = NULL;
void create_list(int value);
void display();
int main()
{

    while (1)
    {
        int value;
        char check;
        printf("Do you want to create a list(Y/N)? ");
        scanf("%c", &check);
        fflush(stdin);
        if (check == 'y' || check == 'Y')
        {
        
            printf("Enter value: ");
            scanf("%d", &value);
            fflush(stdin);
            create_list(value);
        }
        else
        {
            break;
        }
    }
    display();

    return 0;
}

void create_list(int data)
{
    Node *newPtr, *ptr;
    newPtr = (Node *)malloc(sizeof(Node));
    newPtr->value = data;
    newPtr->link = NULL;

    if (Head == NULL)
    {
        Head = newPtr;
    }
    else
    {
        ptr = Head;
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
    ptr = Head;
    while (ptr)
    {
        printf("%d -> ", ptr->value);
        ptr = ptr->link;
    }
    printf("NULL");
}