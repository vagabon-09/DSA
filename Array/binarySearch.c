#include <stdio.h>
int bSerach(int);
arr[6] = {5, 6, 7, 8, 9, 10};
int main()
{
    int data;
    char choice;
    int check;
    printf("Do you want to serach any element(Y/N)?");
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
        printf("Value is founded...");
    }
    else
    {
        printf("Value is not founde...");
    }
}

int bSerach(int data)
{
    int check ;
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