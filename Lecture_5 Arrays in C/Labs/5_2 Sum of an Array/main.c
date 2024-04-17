#include <stdio.h>

void main(void)
{
	int array[10];
	int i;
	int sum =0;
	int avg;
	
	for (i=0;i<10;i++)
	{
		printf("Please Enter number %d: ",i);
		scanf("%d",&array[i]);
		sum += array[i];
	}
	
	avg = sum/10;
	
	printf("Sum of array elements = %d\n",sum);
	printf("Average of array elements = %d",avg);
}