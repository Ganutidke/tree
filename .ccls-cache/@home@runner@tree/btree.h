#include <stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node{
  int data;
  struct node* left;
  struct node* right;
};

struct node* createNode(int data){
  struct node* newNode;
  newNode=(struct node*)malloc(sizeof(struct node));
  newNode->data=data;
  newNode->left=NULL;
  newNode->right=NULL;
  return newNode;
}

struct node* insert(struct node* root,int data){
  if(root==NULL)
  {
    root=createNode(data);
    return root;
  }
  if(data<root->data){
    root->left=insert(root->left, data);
  }
  else{
    root->right=insert(root->right, data);
  }
  return root;
}

struct node* createBST() {
    struct node *root = NULL;
    int n, i, value;

    printf("Enter the number of nodes in the BST: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        root = insert(root, value);
    }

    return root;
}




struct node* search(struct node* root,int data){
  if(root==NULL || root->data==data){
    return root;
  }
  if(data<root->data){
    return search(root->left,data);
  }
  else{
    return search(root->right,data);
  }
}


void preOrder(struct node* root){
  if(root==NULL){
    return;
  }
  printf("%d ",root->data);
  preOrder(root->left);
  preOrder(root->right);
}

void postOrder(struct node* root){
  if(root==NULL){
    return;
  }
  postOrder(root->left);
  postOrder(root->right);
  printf("%d ",root->data);
}

void inOrder(struct node* root){
  if(root==NULL){
    return;
  }
  inOrder(root->left);
  printf("%d ",root->data);
  inOrder(root->right);
}



