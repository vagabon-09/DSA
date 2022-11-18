#include <stdio.h>
int bSerach(int);
int arr[6] = {5, 6, 7, 8, 9, 10};
int main()
{
    int data;
    char choice;
    int check;
    while (1)
    {

        printf("Do you want to serach any element(Y/N)?\n");
        scanf("%c", &choice);
        fflush(stdin);

        if (choice == 'y' || choice == 'Y')
        {
            printf("Enter value: ");
            scanf("%d", &data);
            fflush(stdin);
            check = bSerach(data);
        }
        else
        {
            return 0;
        }

        if (check == 1)
        {
            printf("Value is founded...\n");
        }
        else
        {
            printf("Value is not founde...\n");
        }
    }
}

int bSerach(int data)
{
    int check;
    for (int i = 0; i <= 5; i++)
    {

        if (data == arr[i])
        {

            check = 1;
        }
        else
        {

            check = 0;
        }
    }

    return check;
}