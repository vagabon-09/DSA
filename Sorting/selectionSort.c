// In this program we will apply insertion sort
#include <stdio.h>
void display(int arr[]);
void swap(int arr[], int largest, int lastIndex);
void selectionSort(int arr[], int data);
int main()
{
    int arr[] = {20, 35, -15, 7, 55, 1, -22};
    int n = 7;
    int min = 0, temp;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        // if you want to show the pass then un comment the below two line
         printf("this is %d -> pass\n", i);
         display(arr);
    }
    // display(arr);
}

void display(int arr[])
{
    for (int i = 0; i <= 6; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}