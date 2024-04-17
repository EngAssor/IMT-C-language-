#include "stdio.h"

void main(void)
{
	/* Define a variable to receive a value */
	int x;
	
	/* Ask the user to enter value */
	printf("Please Enter the value: ");
	
	/* Scan a decimal value and save it in x */
	scanf("%d",&x);
	
	/* Print the variable x */
	printf("The value you entered is %d",x);
}