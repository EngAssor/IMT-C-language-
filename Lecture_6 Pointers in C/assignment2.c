#include<stdio.h>
int main (){
int x ,y,z;
x =5 ;
y= 10;
z=15;
int* p;
int *q;
int* r;
p=&x;
q=&y;
r=&z;
printf("%d \n %d \n %d \n %p \n %p \n %p \n %d \n %d \n %d \n ",x,y,z,p,q,r,*p,*q,*r);
printf("After swaping");
int * temp=r;
r=p;
p=q;
q=temp;
printf("%d \n %d \n %d \n %p \n %p \n %p \n %d \n %d \n %d \n ",x,y,z,p,q,r,*p,*q,*r);

}