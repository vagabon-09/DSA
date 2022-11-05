#include <stdio.h>
#include <stdbool.h>
typedef struct singly
{
    int value;
    struct singly *link;
} Node;

Node *head = NULL;
void create_list(int vlaue);
void display();
bool searchItem(int item);
int main()
{
    bool found = false;
    int data;
    char choice;
    while (1)
    {
        printf("Do you want to create a list(Y/N)?");
        scanf("%c", &choice);
        fflush(stdin);
        if (choice == 'y' || choice == 'Y')
        {
            printf("Insert Value: ");
            scanf("%d", &data);
            fflush(stdin);
            create_list(data);
        }
        else
        {
            while (1)
            {
                printf("Do you want to search(Y/N)?");
                scanf("%c", &choice);
                fflush(stdin);
                if (choice == 'y' || choice == 'Y')
                {
                    printf("Enter item: ");
                    scanf("%d", &data);
                    found = searchItem(data);
                    if (found)
                    {
                        printf("Item is founded \n");
                        break;
                    }
                    else
                    {
                        printf("Item is not founded \n");
                        break;
                    }

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
    Node *newPtr, *ptr;
    newPtr = (Node *)malloc(sizeof(Node));
    newPtr->value = value;
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
    Node *start;
    start = head;
    while (start != NULL)
    {
        printf("%d -> ", start->value);
        start = start->link;
    }
    printf("NULL");
}

bool searchItem(int item)
{

    Node *search;
    search = head;
    while (search != NULL)
    {
        if (search->value == item)
        {
            return true;
            break;
        }

        search = search->link;
    }
}
