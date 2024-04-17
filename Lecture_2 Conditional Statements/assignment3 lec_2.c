#include<stdio.h>
int main (){
	int x,y,z ;
	printf("Enter number ");
	scanf("%d",&x);
	printf("\n Enter number ");
	scanf("%d",&y);
	printf("\n Enter number ");
	scanf("%d",&z);
	if(x>y&&x>z){
		printf("Maximum number is %d",x);
	}
	else if (y>x&&y>z){
				printf("Maximum number is %d",y);

		
	}
	else{
				printf("Maximum number is %d",z);

	}
}