#include <stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void marge(int arr[], int mid, int low, int high)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    int B[100];
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            B[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            B[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = arr[j];
        k++;
        j++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = B[i];
    }
}

void margeSort(int arr[], int low, int high)
{

    if (low < high)
    {
        int mid = (high + low) / 2;
        margeSort(arr, low, mid);
        margeSort(arr, mid + 1, high);
        marge(arr, mid, low, high);
    }
}

int main()
{
    int arr[] = {5, 9, 14, 12, 8, 7, 6};
    margeSort(arr, 0, 6);
    display(arr, 6);
}
