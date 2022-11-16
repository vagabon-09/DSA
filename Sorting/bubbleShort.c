// In this vedio we will see how to program a bubble short in c
#include <stdio.h>
//TO calculate time we are taking a new header 
#include<time.h>
clock_t start,end;
double cpu_time;
void shorting(arr, n);
void display();
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    start = clock();
    shorting(arr, n);
    end = clock();
    cpu_time = ((double) (start-end))/CLOCKS_PER_SEC;
    display(arr, n);
    printf("Time taken by the program is: ");
    printf("%f",cpu_time);
}

void shorting(int arr[], int n)
{
    // Scanning data form users
    printf("Enter values in array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Shorting values from array
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void display(int arr[], int n)
{
    printf("Shorted value is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}