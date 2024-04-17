#include<stdio.h>
#include<stdlib.h>
#include"typ.h"
int main (){
	u16 x ;
	printf("Enter the size of array");
	scanf("%d",&x);
	u16 *ptr;
	ptr = (u16*) malloc(x*sizeof(x));
	u16 i =0;
	for(i=0;i<x;i++)
	{
		printf("Enter the value of Element[%d]}",i);
		scanf("%d",ptr);
		ptr++;
	}
	for(i=x;i>0;i--)
	{
		printf("Element [%d] is : %d \n",i-1,*(--ptr));
		
	}
	
}