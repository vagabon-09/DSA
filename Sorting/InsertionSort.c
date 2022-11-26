// In this program we will learn how to make a insertion sort
int main()
{
    int arr[] = {20, 35, -15, 7, 55, 1, -22};
    int n = 7;
    int min = 0, temp;
    for (int i = 1; i < n; i++)
    {
        temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    // Displaying sorted array
    for (int i = 0; i <= 6; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}