#include<stdio.h>
int main(){
	int i ;
	int x;
	int sum=0 ,avg=0;
	
	printf("Enter the Array len :");
	scanf("%d",&x);
	int a[x];
	for(i=0;i<(sizeof(a)/4);i++)
	{
		
		scanf("%d",&a[i]);
		
	}
	int temp=0;
for(i=0;i<(sizeof(a)/4);i++)
	{
		if(a[i]<a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}	
	for(i=0;i<(sizeof(a)/4);i++)
	{
		
		printf("%d\n",a[i]);
		
	}
	
}
