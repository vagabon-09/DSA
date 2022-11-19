#include <stdio.h>
int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int binary_search(int data, int first, int last);

int main()
{
    int data, a;
    char choice;
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Do you want to search (Y/N)?");
    scanf("%c", &choice);
    if (choice == 'y' || choice == 'Y')
    {
        printf("Enter element : ");
        scanf("%d", &data);
        a = binary_search(data, 0, n);
    }
    if (a == -1)
    {
        printf("\nSorry! Element not found.");
    }
    else
    {
        printf("\nGreat, Element found at %d position: ", a);
    }
}

int binary_search(int data, int first, int last)
{
    while (first < last)
    {
        int mid = (last + first) / 2;
        if (arr[mid] == data)
        {
            return mid;
        }
        else if (arr[mid] < data)
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }
    return -1;
}