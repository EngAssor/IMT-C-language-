#include <stdio.h>

void main(void)
{
	int array[10];
	int i;
	int num;
	int count = 0;
	
	for (i=0;i<10;i++)
	{
		printf("Pleae Enter number %d: ",i);
		scanf("%d",&array[i]);
	}
	
	printf("Please Enter a number to count its existance: ");
	scanf("%d",&num);
	
	for (i=0;i<10;i++)
	{
		if (array[i] == num)
		{
			count ++;
		}
	}
	
	printf("The number exist %d times",count);
}