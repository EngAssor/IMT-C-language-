#include <stdio.h>

void main(void)
{
	int array[10];
	int i;
	
	for (i=0;i<10;i++)
	{
		printf("Please Enter number %d: ",i);
		scanf("%d",&array[i]);
	}
	
	printf("The values in reversed order\n");
	
	for ( i =9; i>=0; i--)
	{
		printf("%d\n",array[i]);
	}
}