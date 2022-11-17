#include <stdio.h>
typedef struct tree
{
    int data;
    struct tree *left, *right;
} Node;

Node *create(){
    int x;
    Node *newnode;
    newnode = (Node *)malloc(sizeof(Node));
    printf("Enter data (-1) for no Node: \n");
    scanf("%d",&x);
    if (x==-1)
    {
        return 0;
    }
    newnode ->data = x;
    printf("Enter left child of %d \t",x);
    newnode->left = create();
    printf("Enter right child of %d \t",x);
    newnode->right = create();
    return newnode;
    fflush(stdin);
    
}

void main(){
    Node *root;
    root = 0;
    root = create();
}
