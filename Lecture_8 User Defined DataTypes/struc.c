#include<stdio.h>
#include"typ.h"

typedef struct {
	
	U_16 sal;
	U_16 bon ;
	U_16 ded ;

}employees ;
void fill_e(employees*p);
int main ()
{
	employees ahmed ;
	fill_e(&ahmed);


}
void fill_e(employees*p)
{
	printf("Enter the sal :");
scanf("%d",&((*p).sal));
printf("%d",(*p).sal);
}