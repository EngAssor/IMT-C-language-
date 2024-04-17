#include<stdio.h>
void main (void){
	int x =0;
printf("Enter the num :");
scanf("%d",&x);
int fac =1;
do
{
	fac *=x;
	x--;
	
}while(x!=1);
	printf(" the factorial is : %d",fac);
}