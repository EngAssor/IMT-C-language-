#include <stdio.h>

void main(void)
{
	int array[10];
	int size = 10;
	int i,j,z;
	
	/* Scan the values loop */
	for (i=0;i<10;i++)
	{
		printf("Please Enter number %d:  ",i);
		scanf ("%d",&array[i]);
	}
	
	/* Sort the values using Bubble sorting */
	for (i=0; i<size-1;i++)
	{
		 for (j = 0; j < size-i-1; j++) 
		{
			if(array[j] > array[j+1])
			{
				/* Swap */
				z = array[j+1];
				array[j+1] = array[j];
				array[j] = z;
			}
		}
	}
	
	printf("The minimum number is %d\n",array[0]);
	printf("The maximum number is %d",array[9]);
}

