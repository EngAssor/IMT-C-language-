#include <stdio.h>

void main(void)
{
	int x = 7;
	int y = 4;
	
	/* Perform and operation        */
	printf("Result of and operation is: %d\n", x&y);
	
	/* Perform or operation         */
	printf("Result of or operation is: %d\n",  x|y);
	
	/* Perform xor operation        */
	printf("Result of xor operation is: %d\n", x^y);
	
	/* Perform righ shift operation */
	printf("Shifting x right  1 step: %d\n", x>>1 );
	
	/* Perform lef shift operation  */
	printf("Shifting y left 2 steps : %d\n", y<<2 );
}