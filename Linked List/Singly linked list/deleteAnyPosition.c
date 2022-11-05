#include <stdio.h>
typedef struct singly
{
    int value;
    struct singly *link;
} Node;
int index = 0;
Node *head = NULL;
void display();
void create_list(int value);
void delete_anyPostion(int position);
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
            scanf("%d", &data);
            fflush(stdin);
            create_list(data);
        }
        else
        {
            int p;
            while (1)
            {
                printf("Do you want to delete(Y/N)?");
                scanf("%c", &choice);
                fflush(stdin);
                if (choice == 'y' || choice == 'Y')
                {
                    printf("Enter position: ");
                    scanf("%d", &p);
                    fflush(stdin);
                    delete_anyposition(p);
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

void create_list(int data)
{
    index++;
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

void delete_anyposition(int position)
{
    int p = 1;
    if (index < position)
    {
        printf("Invalid Index");
        exit(0);
    }
    else
    {
        Node *ptr, *nxtPtr;
        ptr = head;
        while (ptr->link != NULL && p < position-1)
        {
            ptr = ptr->link;
            printf("%d ", p);
        }
        nxtPtr = ptr->link->link;
        ptr->link = nxtPtr;
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
