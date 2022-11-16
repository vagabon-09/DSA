// In this vedio we will see how to program a bubble short in c
#include<stdio.h>
int arr[]={15,16,6,8,5};
void shoring();
int main(){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-i; j++)
        {
            if (arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
            
        }
        
    }

    for (int i = 1; i <= 5; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    
}