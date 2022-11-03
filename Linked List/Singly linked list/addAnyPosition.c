#include <stdio.h>
typedef struct singly
{
    int data;
    struct singly *link;
} Node;

Node *Head = NULL;
void display();
void create_node(int value);
void add_anyPosition(int item,int n);

int main()
{
    int value;
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

        }else
        {
            break;
        }
        
    }
    display();
}

void create_node(int value){
    Node *newptr,*ptr;
    newptr =(Node*)malloc(sizeof(Node));
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
            ptr = ptr->link;
        }
        ptr->link = newptr;
        
    }
    
}

void display(){
    Node *view;
    view = Head;
    while (view!=NULL)
    {
        printf("%d -> ",view->data);
        view = view ->link;
    }
    printf("NULL");
    
}