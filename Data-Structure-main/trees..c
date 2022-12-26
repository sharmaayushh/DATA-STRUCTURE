#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *L;
    struct node *R;
};
 struct node*create_node(int data)
 {
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->L=NULL;
    temp->R=NULL;
    return temp;
};
struct node *preorder(struct node*root)
{
    if(root!=NULL)
    {
        printf("%d",root->data);
        preorder(root->L);
        preorder(root->R);
    }
}

int main()
{
    struct node *n1;
    struct node *n2;
    struct node *n3;
    struct node *n4;
    n1=create_node(2);
    n2=create_node(4);
    n3=create_node(6);
    n4=create_node(8);
    n1->L=n2;
    n2->R=n3;
    n2->L=n4;
    n1->R=n3;
    printf("Preorder is---");
    preorder(n1);
    return 0;
}


 