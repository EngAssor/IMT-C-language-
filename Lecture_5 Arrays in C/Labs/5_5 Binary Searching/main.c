#include <stdio.h>

void main(void)
{
	int array[10];
	int size = 10;
	int i,j,z,search;
	int Left, Right, counter;
	int FoundFlag = 0;

/**************************** Scan the Values *************************/	
	/* Scan the values loop */
	for (i=0;i<10;i++)
	{
		printf("Please Enter number %d:  ",i);
		scanf ("%d",&array[i]);
	}
/**********************************************************************/


/**************** Sort the Values using bubble sorting ****************/	
	/* Sort the values using Bubble sorting */
	for (i=0; i<size-1;i++)
	{
		 for (j = 0; j < size-i-1; j++) 
		{
			if(array[j] > array[j+1])
			{
				/* Swap */
				z = array[j+1];
				array[j+1] = array[j];
				array[j] = z;
			}
		}
	}
/***********************************************************************/

/************************** Scan the value to search *******************/
	printf("Please Enter number to search:  ");
	scanf ("%d",&search);
	
/************************* Binary Search *******************************/

	/* start with the middle of the array */
	Left  = 0;
	Right = size-1;
	
	while ( Left <= Right )
	{
		/* always go to the middle of the array */
		counter = Left + (Right-Left)/2;
		
		if ( search == array[counter] )
		{
			FoundFlag =1;
			break;
		}
		
		else if ( search > array[counter] )
			Left = counter + 1;
		
		else
			Right = counter - 1;
	}
	
	if (FoundFlag == 1)
		printf("Value is Found");
	else
		printf("Value Not Exist");
	
}

