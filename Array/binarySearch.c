#include <stdio.h>
void bSearch(int);
int arr[100];
int main()
{
    int n;
    int data;
    char choice;
    printf("Enter size of array between 1 to 100: ");
    scanf("%d", &n);

    printf("Enter data of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[n]);
    }

    while (1)
    {
        printf("Do you want to serach any element(Y/N)?");
        scanf("%c", &choice);
        fflush(stdin);

        if (choice == 'y' || choice == 'Y')
        {
            printf("Enter value: ");
            scanf("%d", &data);
            fflush(stdin);
            bSerach(data, n);
        }
        else
        {
            break;
        }
    }
}

void bSerach(int data,int n)
{
    for (int i = 0; i < n; i++)
    {
        if (data == arr[i])
        {
            printf("Yes, Value is founded...");
        }
        else
        {
            printf("Sorry value is not found...");
        }
    }
}