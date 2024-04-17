#include <stdio.h>

void main(void)
{
	int h,i,j;
	printf("Please Enter the hieght of the pyramid: ");
	scanf("%d",&h);
	
	for (i = 0; i < h; i ++)
	{
		for (j=0; j<h-1-i; j++)
		{
			printf(" ");
		}
		
		for (j=0; j<2*i+1; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
}