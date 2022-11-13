// In this program we will see how to create a stack using array
#include <stdio.h>
int data = 0;
int arr[5];
int top = -1;
void createStack(int);
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
            createStack(data);
            fflush(stdin);
        }
        else
        {
            break;
        }
    }
    display();
}

void createStack(int data)
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
    printf("%d \n", top);
}

void display()
{

    printf("Available data in stack is: ");
    for (int i = 0; i < top; i++)
    {
        printf("%d ", arr[i]);
    }
}