// In this vedio we will see how to program a bubble short in c
#include<stdio.h>
int arr[]={15,16,6,8,5};
void shoring();
int main(){
    for (int i = 0; i < 5-1; i++)
    {
        for (int j = 0; j < 5-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    
}