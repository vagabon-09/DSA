// In this program we will learn how to push value in stack in c programming
#include <stdio.h>
int data = 0;
int arr[5];
int top = -1;
void push(int);
void display();

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
            printf("Enter data: ");
            scanf("%d", &data);
            push(data);
            fflush(stdin);
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
    for (int i = 0; i < top; i++)
    {
        printf("%d ", arr[i]);
    }
}