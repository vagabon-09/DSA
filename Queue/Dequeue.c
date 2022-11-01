#include <stdio.h>
int arr[4];
int f = -1;
int r = -1;
int n = 4;
void createList(int value);
void dequeue();
void display();
int main()
{
    int value;
    char check;
    while (1)
    {
        printf("Do you want to create a queue(Y/N)");
        scanf("%c", &check);
        fflush(stdin);
        if (check == 'y' || check == 'Y')
        {
            printf("Enter value: ");
            scanf("%d", &value);
            createList(value);
            fflush(stdin);
        }
        else
        {
            while (1)
            {
                printf("Do you want to delete(Y/N)");
                scanf("%c", &check);
                fflush(stdin);
                if (check == 'Y' || check == 'y')
                {
                    dequeue();
                }
                else
                {
                    break;
                }
            }

            break;
        }
    }
    display();
}


void createList(int value){
    if (f==(r+1)%n)
    {
       printf("Queue overfollowing");
    }
    if (f== -1 && r == -1)
    {
       f = 0;
       r = 0;
       arr[r] = value;
    }
    else
    {
        r = (r+1)%n;
        arr[r] = value;
    }
    
}

void display(){
    for (int i = f; i <= r; i++)
    {
        printf("%d \n",arr[i]);
    }
    
}

void dequeue(){
    if (f == -1 || r == -1)
    {
        printf("Underfollow...");
    }else
    {
        int item = arr[f];
        if (f == r)
        {
            f = -1;
            r = -1;
        }else
        {
            f = (f+1)%n;
        }
        
        
    }
    
    
}