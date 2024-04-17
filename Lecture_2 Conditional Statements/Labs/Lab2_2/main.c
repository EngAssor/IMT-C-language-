#include <stdio.h>

void main(void)
{
	int hours;
	int salary;
	
	/* Ask the user to enter his working hours */
	printf("Plese Enter Your working hours: ");
	scanf("%d",&hours);
	
	salary = 50 * hours;
	
	if (hours < 40)
	{
		/* if hours less than 40, deduct 10 % */
		salary = ( salary * 90 ) / 100 ;
	}
	
	printf("Your Salary is %d",salary);
		
}

