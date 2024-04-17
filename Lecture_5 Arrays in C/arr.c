#include<stdio.h>
int main(){
	int arr [10];
	int i ;
	for(i=0;i<10;i++){
		printf("Enter Number %d ",i);
		scanf("%d",&arr[i]);
	}
	printf("reversed order \n ");
for(i=9;i>=0;i--){
	printf("%d \n",arr[i]);
}
}