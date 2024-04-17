#include <stdio.h>

void main(void)
{
	int ID;
	
	/* Ask the user to enter his ID */
	printf("Plese Enter Your ID: ");
	scanf("%d",&ID);
	
	switch(ID)
	{
		case 1234: printf("Welcome Ahmed");   break;
		case 5678: printf("Welcome Youssef"); break;
		case 1145: printf("Welcome Mina");    break;   
		default  : printf("Wrong ID");        break;
	}
		
}

