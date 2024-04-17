#include <stdio.h>

void main()
{       
    int iterator,number,sum=0;
	float avg;
	
	printf("Enter the 10 numbers\n");
	for (iterator=0;iterator<10;iterator++)
	{
		printf("Number-%d :",iterator);
		scanf("%d",&number);
		sum +=number;
	}
	avg=sum/10.0;
	printf("The sum of 10 no is : %d\nThe Average is      : %f\n",sum,avg);
 
}