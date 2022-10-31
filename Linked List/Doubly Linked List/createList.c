#include<stdio.h>
#include<stdlib.h>
typedef struct doubely
{
    int value;
    struct doubely *prev;
    struct doubely *nex;
}Node;

Node *Head = NULL;
void create_list(int value);
void display();
int main(){
    while (1)
    {

    }
    
}