#include<stdio.h>
int main(){
	
	int arr [10];
	int i,j;
	int n=10;
	for(i=0;i<10;i++)
	{
		printf("Enter the Number : ");
		scanf("%d",&arr[i]);
	}
	
   for(i=0;i<n-1;i++){
	   for(j=0;j<n-i-1;j++)
	   {
		   if(arr[j]>arr[j+1])
		   {
			   arr[j]=arr[j]+arr[j+1];
			   arr[j+1]=arr[j]-arr[j+1];
			   arr[j]=arr[j]-arr[j+1];

		   }
	   }
	   
   }
   for(i=0;i<10;i++)
	{
		printf("%d \n",arr[i]);
	}
}