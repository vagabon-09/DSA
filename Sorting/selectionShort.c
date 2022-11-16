// In this program we will see how to how to create a selection sort using c programming language
#include <stdio.h>
int main()
{
    int arr[] = {7, 4, 10, 8, 9, 1};
    for (int i = 0; i < 6 - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < 6 ; j++)
        {
            if (arr[min] >  arr[j])
            {
                int temp = arr[min];
                arr[min] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
}