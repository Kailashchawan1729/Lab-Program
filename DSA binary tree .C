#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node*left;
struct node*right;
};

struct node*insert(struct node* root,int value){
if(root==NULL){
    root=(struct node*)malloc(sizeof(struct node));
    root->data=value;
    root->left=root->right=NULL;
}
else if (value<root->data){
    root->left=insert(root->left,value);
}
else if (value>root->data){
    root->right=insert(root->right,value);
}
return root;
};

void preOrder(struct node*root){
if(root){
    int value;
    printf("%d",root->data);
    preOrder(root->left);
    preOrder(root->right);
}
}
void postOrder(struct node*root){
if(root){

    postOrder(root->left);
    postOrder(root->right);
    printf("%d",root->data);
}
}
void inOrder(struct node*root){
if(root){

    inOrder(root->left);
    printf("%d",root->data);
    inOrder(root->right);
}
}
int main()
{
    struct node*root=NULL;
    int n,value;

    printf("enter the number of elements in the tree:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%d",&value);
    root=insert(root,value);
    }

    printf("\npre order:");
    preOrder(root);
    printf("\npost order:");
    postOrder(root);
    printf("\nin order:");
    inOrder(root);
    printf("\nKailash chawan->1WA25CS107");
}
