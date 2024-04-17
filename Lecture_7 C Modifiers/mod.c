#include<stdio.h>
#include"typ.h"
void fun(void);
int main (){
U_16 i =0	;
for(;i<7;i++){
fun();

}



}
void fun(void)
{
static U_8 x =0;
x++;
printf("%d\n",x);
}