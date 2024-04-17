#include<stdio.h>
int main (){
	int ID =0,PASS=0 ,Did ,Dpass ;
	Did = 61120;
	Dpass = 8520 ;
	printf("Enter Ur ID : ");
	scanf("%d",&ID);
	if (ID != Did)
	{
		printf("incorrect ID");
		
	}
	else {
			printf("Enter Ur Password : ");

		scanf("%d",&PASS);
	
	 if (PASS != Dpass)
	{
				printf("incorrect Password");
	}
	else{
		printf("Ur User name is IMT");
	}

}
}