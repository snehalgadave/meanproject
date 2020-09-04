#include<iostream>
#include<stdlib.h>

using namespace std;
//this is a commemt

struct node
{
	int data;
	struct node *right;
	struct node *left;
};

 int main()
 {
    struct node *n1=(struct node*)malloc(sizeof(struct node));
 
 	n1->data=10;
 	n1->left=NULL;
 	n1->right=NULL;
 	
 	
 	struct node *n2=(struct node*)malloc(sizeof(struct node));
 	
	n2->data=15;
 	n2->left=NULL;
 	n2->right=NULL;
 	
    n1->right =n2;
    
    
    struct node *n3=(struct node*)malloc(sizeof(struct node));
 	
 	n3->data=8;
 	n3->left=NULL;
 	n3->right=NULL;
 	
    n1->left =n3;
    
    
    struct node *n4=(struct node*)malloc(sizeof(struct node));
    
	n4->data=17;
 	n4->left=NULL;
 	n4->right=NULL;
 	
 	n2->right =n4;
 	
 	
    cout<<n1->data<<endl;
 	cout<<n1->right->data<<endl;
 	cout<<n1->left->data<<endl;
 	cout<<n1->right->right->data<<endl;
 	
 	
 	
 	return 0;
 	
 }
 //end of code
