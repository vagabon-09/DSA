// In this program we will see how to make a queue using two stack
#include <stdio.h>
int stack1[100];
int stack2[100];
int top = -1;
void push(int);
void display();
void pop();
int main()
{
    int data;
    char choice;
    while (1)
    {
        printf("Do you want to Create stak(Y/N)?");
        scanf("%c", &choice);
        fflush(stdin);
        if (choice == 'y' || choice == 'Y')
        {
            printf("Enter data: ");
            scanf("%d", &data);
            push(data);
        }
        else
        {
            break;
        }
    }
    display();
}

void push(int data)
{
    if (top >= 100)
    {
        printf("Stack is full..");
    }

    top++;
    stack1[top] = data;
}

void display(){
    for (int i = 0; i < top; i++)
    {
        printf("%d\n",stack1[i]);
    }
    
}