#include<stdio.h>

void Bubble_sort(int*ptr,int size);
void main()
{
	int i;
	int array[10];
	/* Scan the values loop */
	for (i=0;i<10;i++)
	{
		printf("Please Enter number %d:  ",i);
		scanf ("%d",&array[i]);
	}
	Bubble_sort(array,10);
	/* Print the values after sorting */
	printf("Values after sorting are:\n");
	for (i=0;i<10;i++)
	{
		printf("%d\n",array[i]);
	}
}
void Bubble_sort(int*ptr,int size)
{
	int i,j,z;
/* Sort the values using Bubble sorting */
	for (i=0; i<size-1;i++)
	{
		 for (j = 0; j < size-i-1; j++) 
		{
			if(ptr[j] > ptr[j+1])
			{
				z = ptr[j+1];
				ptr[j+1] = ptr[j];
				ptr[j] = z;
			}
		}
	}
}