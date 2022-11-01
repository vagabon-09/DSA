// We are creating queue using array
// In this code we will see how to make a queue using array
#include <stdio.h>
int n = 4;
int arr[4];
int f = -1;
int r = -1;
void enqueue(int value);
void display();
int main()
{
    char check;
    int value;

    while (1)
    {
        printf("Do you want to enqueue(Y/N)?");
        scanf("%c", &check);
        fflush(stdin);
        if (check == 'y' || check == 'Y')
        {
            printf("Enter value: ");
            scanf("%d", &value);
            enqueue(value);
            fflush(stdin);
        }
        else
        {
            break;
        }
    }
    display();
}

void enqueue(int value)
{
    if (f == (r + 1) % n)
    {
        printf("Sorry value is not inserted \n Queue is overflowing \n");
        return;
    }
    if (f == -1 && r == -1)
    {
        f = r = 0;
        arr[r] = value;
    }
    else
    {
        r = (r + 1) % n;
        arr[r] = value;
    }
}

void display()
{
    for (int i = f; i <= r; i++)
    {
        printf("%d\n", arr[i]);
    }
}