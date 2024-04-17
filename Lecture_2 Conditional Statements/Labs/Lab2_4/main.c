#include <stdio.h>

void main(void)
{
	int grade;
	
	/* Get the user grade */
	printf("Please enter number: ");
	scanf("%d",&grade);
	
	if ( grade < 50 )
	{
		printf ("Your rating is failed");
	}
	
	else if ( (grade >= 50 ) && (grade < 65) )
	{
		printf ("Your rating is Normal");
	}
	
	else if ( (grade >= 65 ) && (grade < 75) )
	{
		printf ("Your rating is Good");
	}
	
	else if ( (grade >= 75 ) && (grade < 85) )
	{
		printf ("Your rating is Very Good");
	}
	
	else
	{
		printf ("Your rating is Excellent");
	}
}