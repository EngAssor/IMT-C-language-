#include<stdio.h>
#include"typ.h"
#include<stdlib.h>
struct node {
	u32 Data ;
	struct node * Next;
	
	
};
typedef struct node no ;
no * headref=NULL;
static u32 listlength=0;
void print_list(void);
void add_node(no ** head,u32 data);
u32 main (){
	u32 x =0;
	scanf("%d",&x);
	add_node(headref,x);
	print_list();
	
	
}
void add_node(no ** head,u32 data){
	
		no *p =(no *)malloc(sizeof(no));
		p->Next=*head;
		p->Data=data;
		headref=p;
		listlength++;
	
}
void print_list(void){
	no *ptr= &headref;
	u8 i;
	for(i=0;i<listlength;i++)
	{
		ptr=ptr->Next;
		printf("%d",ptr->Data);
	}
	
}