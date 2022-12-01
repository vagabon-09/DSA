// In this we will see how to apply binary search
#include <stdio.h>
int bSearch(int arr[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else
        {
            if (arr[mid] < key)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 9, 10, 15, 17, 19};
    int n = sizeof(arr) / sizeof(int);
    int check, key;
    printf("Search element: ");
    scanf("%d", &key);
    check = bSearch(arr, 0, n, key);
    if (check == -1)
    {
        printf("Data is not found in the present array ");
    }
    else
    {
        printf("Data is founded at position %d ", check + 1);
    }
}
