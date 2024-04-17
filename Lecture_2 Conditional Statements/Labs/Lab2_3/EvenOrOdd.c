#include <stdio.h>

void main(void)
{
	int num;
	
	/* Get the number to check from the user */
	printf("Please enter number: ");
	scanf("%d",&num);
	
	if ((num % 2) != 0 )
	{
		printf ("Number is Odd");
	}
	
	else
	{
		printf ("Number is Even");
	}
}