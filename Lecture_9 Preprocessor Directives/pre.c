#include"typ.h"
#include<stdio.h>
#include"MACROS.h"
#define size 10

int main(){
u8 x = 0;
SET_BIT(x,0);
printf("%d\n",x);
CLR_BIT(x,0);
printf("%d\n",x);
TOG_BIT(x,0);
printf("%d\n",x);
u8 y =GET_BIT(x,0);
printf("%d\n",y);
	
}