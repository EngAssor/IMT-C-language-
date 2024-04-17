#include <stdio.h>

void Add_Sub(int a, int b, int* sum, int *sub);

void main (void)
{
	int var1, var2;
	int SumResult,SubResult;
	
	printf("Please Enter Value 1:  ");
	scanf("%d",&var1);
	
	printf("Please Enter Value 2:  ");
	scanf("%d",&var2);
	
	Add_Sub(var1,var2,&SumResult,&SubResult);
	
	printf("The result of Summation   is:  %d\n",SumResult);
	printf("The result of Subtraction is:  %d",SubResult);
}

void Add_Sub(int a, int b, int* sum, int *sub)
{
	*sum = a + b;
	*sub = a - b;
}