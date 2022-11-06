// In this code we will laear how to delete a node from last
// this libary use to scan and print
#include <stdio.h>
//this libary use to call malloc and calloc 
#include <stdlib.h>
//Creating structare
typedef struct doubely
{
    int data;
    struct doubely *next;
    struct doubley *prev;
} Node;

Node *head = NULL;
Node *last = NULL;
void display();
void create_list(int value);
void delete ();

//Main function of this program
/* in this function we are taking data from user and passing to create
 list for creating list and calling delete function to delete last node*/

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
            printf("Enter value: ");
            scanf("%d", &data);
            fflush(stdin);
            create_list(data);
        }
        else
        {
            while (1)
            {
                printf("Do you want to delete(Y/N)?");
                scanf("%c", &choice);
                fflush(stdin);
                if (choice == 'y' || choice == 'Y')
                {
                    delete ();
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

//For creating node list
void create_list(int value)
{
    Node *newPtr, *ptr;
    newPtr = (Node *)malloc(sizeof(Node));
    newPtr->data = value;
    newPtr->next = NULL;
    newPtr->prev = NULL;
    if (head == NULL)
    {
        head = newPtr;
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newPtr;
        newPtr->prev = ptr;
        last = newPtr;
    }
}

//For displaying nodes

void display()
{
    Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
}

//Funcation deleting last node
void delete ()
{
    Node *ptr;
    ptr = last;
    ptr = ptr->prev;
    ptr->next = NULL;
    last->prev = NULL;
    last = ptr;
}