#include <stdio.h>
arr[] = {5, 6, 9, 7, 8, 1, 2};
int binarySearch(int first, int last, int data)
{

    while (first > last)
    {
       int mid = first + last;
        if (arr[mid] == data)
        {
            return mid;
        }
        else if  (arr[mid] < data)
        {
            first = mid - 1;
        }

        else if (arr[mid] > data)
        {
            last = mid + 1;
        }
    }
}
int main()
{

    int n = 7;
   int p =  binarySearch(0, n,96);

   printf("%d",p);
}