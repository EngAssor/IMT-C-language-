#include <stdio.h>

void main(void)
{
    int number;
	
	/* Start factorail with 1 */
    int factorial = 1;

    printf("Enter an integer: ");
    scanf("%d",&number);


    /* loop terminates when number is less than or equal to 0 */
    do
    {
        factorial *= number;
        number--;
    }while (number > 0);

    printf("Factorial= %d", factorial);

}