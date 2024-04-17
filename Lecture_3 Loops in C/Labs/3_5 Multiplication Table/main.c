#include <stdio.h>

void main()
{
   int iterator,num;

   printf("Enter the number to display its multiplication table : ");
   scanf("%d",&num);
   printf("\n");
   for(iterator=1; iterator<=num; iterator++)
   {
     printf("%d X %d = %d \n",num,iterator,num*iterator);
   }

}