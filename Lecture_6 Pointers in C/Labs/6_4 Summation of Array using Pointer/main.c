#include <stdio.h>


void main (void)
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int Sum=0;
	int i;
	int *ptr = arr;
	
	for(i=0; i<10; i++)
	{
		Sum += *ptr;
		ptr++;
	}
	
	printf("The sum of the array is:  %d",Sum);
}