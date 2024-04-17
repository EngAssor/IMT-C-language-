#include<stdio.h>
int fact(int f);
	int a =1 ;
	int b =0;

int main (){


int x = fact(5);
printf("%d",x);
	
}
int fact (int f)
{
	
	f--;
	a*=f;
	if (f==0){
return a ;
	}
	fact(f);
}