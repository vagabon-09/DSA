#include <stdio.h>
int position = 0;
typedef struct singly
{
    int data;
    struct singly *link;
} Node;

Node *Head = NULL;
void display();
void create_node(int value);
void add_anyPosition(int item, int n);

int main()
{
    int value, item, n;
    char choice;
    while (1)
    {

        printf("Do you want to create list(Y/N)?");
        scanf("%c", &choice);
        fflush(stdin);
        if (choice == 'y' || choice == 'Y')
        {
            printf("Enter value: ");
            scanf("%d", &value);
            fflush(stdin);
            create_node(value);
        }
        else
        {
            while (1)
            {
                printf("Do you want to insert value(Y/N)?");
                scanf("%c", &choice);
                if (choice == 'y' || choice == 'Y')
                {
                    printf("Enter value: ");
                    scanf("%d", &item);
                    printf("Enter position: ");
                    scanf("%d", &n);
                    add_anyPosition(item, n);
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

void create_node(int value)
{
    position++;
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
    Node *view;
    view = Head;
    while (view != NULL)
    {
        printf("%d -> ", view->data);
        view = view->link;
    }
    printf("NULL");
}

void add_anyPosition(int item, int n)
{
    Node *P, *Q, *newNode;
    P = Head;
    newNode = (Node *)malloc(sizeof(Node));

    if (position < n)
    {
        printf("Invalid position..\n");
        return;
    }
    else
    {
        int i = 1;
        while (i < n - 1 && P->link != NULL)
        {
            P = P->link;
            i++;
        }

        Q = P->link;
        newNode->data = item;
        newNode->link = Q;
        P->link = newNode;
    }
}