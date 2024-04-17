#include<stdio.h>
int main(){
	int x=0 ,y=0 ;
	int sum =0;
	while(1)
	{
		printf("Enter the first Number: ");
		scanf("%d",&x);
		printf("Enter the second Number: ");
		scanf("%d",&y);
		sum = x+y;
		printf(" the result is : %d \n ",sum);
	}
	
}