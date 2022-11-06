// In this code we will lear how to Add node at the last of the list
#include <stdio.h>
#include <stdlib.h>
typedef struct doubely
{
    int data;
    struct doubley *next;
    struct doubley *prev;
} Node;

Node *Head = NULL;
Node *Last = NULL;
void display();
void createList(int value);
void addLast(int value2);
int main()
{
    int data;
    char choice;
    while (1)
    {
        printf("Do you want to create list(Y/N)?");
        scanf("%c",&choice);
        fflush(stdin);
        if (choice == 'y' || choice =='Y')
        {
            printf("Enter value: ");
            scanf("%d",&data);
            fflush(stdin);
            createList(data);
        }else
        {
            while (1)
            {
                printf("Do you want to add last(Y/N)?");
                scanf("%c",&choice);
                fflush(stdin);
                if(choice == 'y' || choice == 'Y'){
                    printf("Enter value: ");
                    scanf("%d",&data);
                    fflush(stdin);
                    addLast(data);
                }else
                {
                    break;
                }
                
            }
            
            break;
        }
        
        
    }
    display();
    
}
