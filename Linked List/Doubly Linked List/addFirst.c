// In this code we will learn how to add a node at the start of the list
#include <stdio.h>
#include <stdlib.h>
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
void addFirst(int value);

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
            break;
        }
    }
    display();
}

void create_list(int value){
    Node *newPtr,*ptr;
    newPtr =(Node*)malloc(sizeof(Node));
    newPtr->data = value;
    newPtr->next = NULL;
    newPtr->prev = NULL;
    if (head == NULL)
    {
        head = newPtr;
    }else
    {
        ptr = head;
        while (ptr->next!=NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newPtr;
        newPtr->prev = ptr;
        
    }
    
    
}

void display(){
    Node *ptr;
    ptr = head;
    while (ptr!=NULL)
    {
        printf("%d -> ",ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
    
}
