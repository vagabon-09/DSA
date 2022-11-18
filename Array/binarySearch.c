#include <stdio.h>
int arr[] = {10,12,15,19,22,29,30};

int binary_search(int data, int low, int high);

int main()
{
    int data, a;
    char choice;
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Do you want to search any number(Y/N)? ");
    scanf("%c", &choice);
    if (choice == 'y' || choice == 'Y')
    {
        printf("Enter the element : ");
        scanf("%d", &data);
        a = binary_search(data, 0, n - 1);
    }
    if (a == -1)
    {
        printf("\nSorry ! Element not found.");
    }
    else
    {
        printf("\nElement found at %d position: ", a);
    }
}

int binary_search(int data, int low, int high)
{
    while (low < high)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == data)
        {
            return mid;
        }
        else if (arr[mid] < data)
        {
            low = mid - 1;
        }
        else
        {
            high = mid + 1;
        }
    }
    return -1;
}