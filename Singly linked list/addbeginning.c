#include <stdio.h>
typedef struct singly
{
    int data;
    struct singly *link;
} Node;

Node *Head = NULL;
void display();
void  add_beginning(int value);
int main(){
    while (1)
    {
        int value;
        char check;
        printf("Do you want to create a list(Y/N)?");
        scanf("%c",&check);
        fflush(stdin);
        if (check == 'Y' || check == 'y')
        {
            printf("Enter value: ");
            scanf("%d",&value);
            fflush(stdin);
            add_beginning(value);
        }else
        {
            break;
        }
        
        
    }
    display();
    
}

void add_beginning(int value){
    Node *newptr, *ptr;
    newptr = (Node*)malloc(sizeof(Node));
    newptr->data = value;
    newptr->link = NULL;
    if (Head == NULL)
    {
       Head = newptr;
    }else
    {
        ptr = Head;
        while (ptr->link!=NULL)
        {
            
        }
        
    }
    
    
}