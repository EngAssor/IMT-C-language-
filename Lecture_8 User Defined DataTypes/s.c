#include<stdio.h>
#include"typ.h"
#include<stdlib.h>

 struct my {
	u32 data;
};
int main (void){
	struct my * ptr;
	while(1){
printf("to add node : 0 \n to print the node :1\nto exit :2");
u8 key ;

printf("\nYou choice: ");
scanf("%d",&key);
	
	if (key == 0)
	{
	 
	 ptr= ( struct my *) malloc(sizeof( struct my));
	printf("Enter the value of node:");
	scanf("%d",&ptr->data);
			printf("the data is : %d\n",ptr->data);

	}
	else if(key==1)
	{
		printf("the data is : %d",ptr->data);
		
	}
	else if (key==2)
	{
		break;
	}
	else
	{
		printf("invalid input\n");
	}
}

}
