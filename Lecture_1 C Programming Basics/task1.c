#include<stdio.h>
int main (){
int x=7;int y=4;
int z= x&y;printf("%d\n",z);
z= x|y;printf("%d\n\a",z);
z= x^y;printf("%d\n",z);
z= x>>1;printf("%d\n",z);
z= y<<2;printf("%d\n",z);
}