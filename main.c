#include <stdio.h>
#include "btree.h"

int main(){
  struct node* root=NULL;
  int choice,data;

  printf("\t\tBinary Search Operations\n");

  do{
    printf("\n\n1.create BST");
    printf("\n2.Search a Element in BST");
    printf("\n3.Insert a Element in BST");
    printf("\n4.Display BST in inorder");
    printf("\n5.Display BST in preorder");
    printf("\n6.Display BST in postorder");
    printf("\n7.Exit");
    printf("\n\nEnter the choice : ");
    scanf("%d",&choice);

    switch(choice){
      case 1:
        printf("\nEnter the root element ::");
        scanf("%d",&data);
        root=createNode(data);
        printf("\nBST successfully created");
        break;

      case 2:
        printf("\nEnter the value to search in BST :: ");
        scanf("%d",&data);
        if(search(root, data)){
          printf("\n%d is present in BST",data);
        }
        else{
          printf("%d is not present in BST",data);
        }
        break;

      case 3:
        printf("\nEnter the value to insert :: ");
        scanf("%d",&data);
        root=insert(root, data);
        printf("\n%d inserted successfully",data);
        break;

      case 4:
        printf("\nBST in inorder :: ");
        inOrder(root);
        printf("\n");
        break;

      case 5:
        printf("\nBST in preorder :: ");
        preOrder(root);
        printf("\n");
        break;

      case 6:
        printf("\nBST in postorder :: ");
        postOrder(root);
        printf("\n");
        break;

      case 7:
        printf("\nExiting Program........................");
        break;

      default:
        printf("\nInvalid choice! try again");
    } 
  }while(choice!=7);
  return 0;
}