
#include<stdio.h>

#include<stdlib.h>
 typedef struct node{
	int x;
	struct node*link;
}Node;
Node *head; 
void addnod(Node * hr,int data);
int main (){


addnod(head,50);
printf("%d\n",head->x);
addnod(head,100);
printf("%d\n",head->x);
addnod(head,80);
printf("%d\n",head->x);


}
void addnod(Node * hr,int data){
	Node * newnode =(Node *)malloc(sizeof(Node));
	newnode->x=data;
	newnode->link=hr;
	head=newnode;
}