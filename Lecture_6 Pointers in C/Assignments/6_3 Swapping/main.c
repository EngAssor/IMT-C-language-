#include<stdio.h>

void main()
{
	int x=5,y=6,z=7;
	int*p=&x;
	int*q=&y;
	int*r=&z;

	printf("the value of x,y,z:%d,%d,%d\n",x,y,z);
	printf("the value of p,q,r:%p,%p,%p\n",p,q,r);
	printf("the value of *p,*q,*r:%d,%d,%d\n",*p,*q,*r);
	p=&z;
	q=&x;
	r=&y;
	printf("Swapping pointers\n");
	printf("the value of x,y,z:%d,%d,%d\n",x,y,z);
	printf("the value of p,q,r:%p,%p,%p\n",p,q,r);
	printf("the value of *p,*q,*r:%d,%d,%d\n",*p,*q,*r);
}