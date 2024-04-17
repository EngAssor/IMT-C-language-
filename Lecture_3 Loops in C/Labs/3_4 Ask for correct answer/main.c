#include <stdio.h>

void main(void)
{
	int answer;
	
	/* Get the value from the user */
	printf("Enter the answer of 3 x 4 = ");
	scanf("%d",&answer);
	
	/* Loop as long as the answer is not 12 */
	while(answer != 12)
	{
		printf("Not correct, Please try again: ");
		scanf("%d",&answer);
	}
	
	/* Exiting loop means that the answer is 12, loop thank you */
	printf("Thank You");
}