#include<stdio.h>
void buble(int * a,int n);
void sawp(int* a,int *b);
int main (){
int arr[5]={5,4,3,2,1};
buble(arr,5);
for(int j =0;j<5;j++)
{
	printf("%d \n",arr[j]);
}

}
void buble(int * a,int n){
	int i=0;
	for(;i<n-1;i++)
	{
		int j= 1;
		
		for(;j<n;j++){
		if (a[j-1]>a[j])
		{sawp(&a[j-1],&a[j]);}
		else{
			
		}}
		
	}
	
}
void sawp(int* a,int *b)
{
	int temp = *a;
	*a= *b;
	*b= temp;
}