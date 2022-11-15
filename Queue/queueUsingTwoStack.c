// In this program we will see how to make a queue using two stack
#include <stdio.h>
int stack1[100];
int stack2[100];
int top = -1;
void push(int);
void display();
void fillStack2();
void pop();
void refill();
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
            fflush(stdin);
        }
        else
        {
            while (1)
            {
                printf("Do you want to pop(Y/N)?");
                scanf("%c", &choice);
                fflush(stdin);
                if (choice == 'y' || choice == 'Y')
                {
                    pop();
                }
                else
                {
                    break;
                }
            }

            break;
        }
    }
    fillStack2();
    refill();
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

void fillStack2()
{
    int i = 0;
    int j = top;
    while (i <= top)
    {

        stack2[i] = stack1[j];
        i++;
        j--;
    }
}
void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack2[i]);
    }
}

void pop()
{
    top--;
}

void refill(){
    int i = 0;
    int j = top;
    while (i<=top)
    {
        stack1[i] = stack2[j];
        i++;
        j--;
    }

}