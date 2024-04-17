#include <stdio.h>

void main(void)
{
	/* Define two integers */
	int a , b;
	
	/* Ask the user to enter value 1 */
	printf("Please Enter number 1 : ");
	
	/* Scan the value and save it in a */
	scanf("%d",&a);
	
	/* Ask the user to enter value 2 */
	printf("Please Enter number 2 : ");
	
	/* Scan the value and save it in b */
	scanf("%d",&b);
	
	/* Print the summation */
	printf("a + b = %d\n", a+b);
	
	/* Print the summation */
	printf("a x b = %d\n", a*b);
}