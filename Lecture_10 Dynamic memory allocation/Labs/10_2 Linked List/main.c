#include <stdio.h>
#include <stdlib.h>
#include "STD_Types.h"
#include "LinkedList.h"

node head;

void main(void)
{
	
	u32 input;
	u32 newValue;
	u8  ExitFlag = 0;
	
	while (ExitFlag == 0)
	{
		printf("To add node enter 0\n");
		printf("To print the linked list enter 1\n");
		printf("To exit press to 2\n");
		printf("Your Choice: ");
		scanf("%d",&input);
		
		switch (input)
		{
			case 0 : printf("Please Enter Node Value: ");
			         scanf("%d",&newValue);
					 AddNode(newValue);
					 printf("Node Added Thank You \n\n\n");
					 break;
			case 1 : PrintLinkedList(); break;
			case 2 : printf("Thank You\nGood Bye"); ExitFlag = 1; break;
			default: printf("Invalid Choice please try again\n"); break;
		}
	}
}