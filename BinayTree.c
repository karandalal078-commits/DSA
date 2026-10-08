#include<stdio.h>
#include<stdlib.h>
typedef struct node {
	int data;
	struct node *left;
	struct node *right;
} node;

node *createNode(int value) {
	node *newnode;
	newnode=(node *)malloc(sizeof(node));
	if(newnode==NULL) {
		printf("Memory is not allocated");
		return NULL ;
	}

	newnode->data=value;
	newnode->left=NULL;
	newnode->right=NULL;


	return newnode;

}

void preorder(node *root) {
	if(root==NULL) {

		return ;
	}


	printf("%d ",root->data);
	preorder(root->left);
	preorder(root->right);


}

void inorder(node *root) {
	if(root==NULL) {
		return ;
	}
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);

}

void postorder(node *root) {
	if(root==NULL) {
		return ;

	}
	postorder(root->left);
	postorder(root->right);
	printf("%d ",root->data);

}
int  main() {
	node *root=createNode(10);
	node *node20=createNode(20);
	node *node30=createNode(30);
	node *node40=createNode(40);

	root->left=node20;
	root->right=node30;


	node20->left=node40;
	
	
	inorder(root);
	printf("\n");
	preorder(root);
	printf("\n");
	postorder(root);
	printf("\n");


	return 0;
}

