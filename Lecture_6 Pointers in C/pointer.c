#include<stdio.h>
void swap(int * k, int * n);
int main (){
int x = 10;
int y = 50 ;
printf("x = %d  \t y = %d \n",x,y);
swap(&x,&y);
printf("x = %d  \t y = %d \n",x,y);

	
	
}
void swap(int * k,int * n)
{
	int temp =*k;
	*k=*n;
	*n =temp ;
}