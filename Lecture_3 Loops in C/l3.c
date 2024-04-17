#include<stdio.h>
int main (){
	int x =0 ;
	printf("Enter the num :");
	scanf("%d",&x);
	int y =1;
	int mlt=0;
	while(y<=10)
	{
		mlt=x*y;
		printf("%d  X  %d = %d \n",x,y,mlt);
		y++;
	}
	
	
}