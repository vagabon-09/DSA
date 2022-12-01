/*In this code we will learn*/
#include <stdio.h>

void toh(int n, char s, char t, char d)
{
    if (n>0)
    {
        toh(n-1,s,d,t);
        printf("\n Move disc from %c -> %c",s,d);
        toh(n-1,t,s,d);
    }
}
int main()
{
    int disck = 1;
    toh(disck,'a','b','c');
}