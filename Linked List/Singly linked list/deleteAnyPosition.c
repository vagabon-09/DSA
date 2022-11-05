#include <stdio.h>
typedef struct singly
{
    int value;
    struct singly *link;
} Node;
Node *head = NULL;
void display();
void create_list(int value);
void delete_anuPostion();
int main()
{
    int data;
    char choice;
    while (1)
    {
        printf("Do you want to create List(Y/N) ?");
        scanf("%c", &choice);
        fflush(stdin);
        if (choice == 'y' || choice == 'Y')
        {
            printf("Enter value: ");
            scanf("%d",&data);
            fflush(stdin);
            create_list(data);
        }
        else
        {
            break;
        }
    }
    display();
}

void create_list(int data)
{
    Node *newPtr, *ptr;
    newPtr = (Node *)malloc(sizeof(Node));
    newPtr->value = data;
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
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->value);
        ptr = ptr->link;
    }
    printf("NULL");
}
