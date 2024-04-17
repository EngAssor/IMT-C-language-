#include<stdio.h>
int * getptr(int b)
{
	int a =6;
	if (b==4)
	{
		a=2*b;
		
	}
	return &a;
}
int main(void)
{
	int * ptr = getptr(4);
	printf("%d",*ptr);
	return 0;
}

//*** *** **
//010 110 01                                1000 0000 0000 0110