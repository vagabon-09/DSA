// In this program we will see how to pop from stack
// In this program we will learn how to push value in stack in c programming
#include <stdio.h>
int data = 0;
int arr[5];
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
        printf("Do you want to create stack(Y/N)?");
        scanf("%c", &choice);
        fflush(stdin);
        if (choice == 'y' || choice == 'Y')
        {
            printf("Push data: ");
            scanf("%d", &data);
            push(data);
            fflush(stdin);
        }
        else
        {
            while (1)
            {
                printf("Do you want to pop(Y/N) ?");
                scanf("%c", &choice);
                fflush(stdin);
                if (choice == 'y' || choice == 'y')
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
    display();
}

void push(int data)
{

    if (top > 5)
    {
        printf("Error: Stack overfollow...\n");
    }
    else
    {
        top++;
        arr[top] = data;
    }
}

void display()
{

    printf("Available data in stack is: ");
    for (int i = top; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}

void pop()
{
    int last = arr[top];
    if (top <= -1)
    {
        printf("Stack is empty now ..\n");
    }
    else
    {
        top--;
    }
}