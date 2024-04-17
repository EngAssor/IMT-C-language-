#include<stdio.h>
int main(){
	int id ,pass ;
	int id_1 = 1234;
	int id_2=  5678;
	int id_3 = 9870;
	int pass1 =7788;
	int pass2 =5566;
	int pass3 = 1122;
	int i ;
	printf("Enter your ID :");
	scanf("%d",&id);
	if(id==id_1)
	{
		printf("Enter your password :");
		scanf("%d",&pass);
		for(i=0;i<2;i++)
		{
			
			
			if(pass==pass1)
			{
				printf("Welcome Ahmed");
				break;
			} 
			else
			{
				printf("try again : ");
				scanf("%d",&pass);
			}
		}
		if (i==2)
		{
			printf("incorrect password for 3 times !");
		}
	}
	else if(id==id_2)
	{
		printf("Enter your password :");
					scanf("%d",&pass);

		for(i=0;i<2;i++)
		{
			
			if(pass==pass2)
			{
				printf("Welcome Amr");
				break;
			} 
			else
			{
				printf("try again : ");
							scanf("%d",&pass);

			}
		}
		if (i==2)
		{
			printf("incorrect password for 3 times !");
		}
	}
	else if(id==id_3)
	{
		printf("Enter your password :");
					scanf("%d",&pass);

		for(i=0;i<2;i++)
		{
			
	
			if(pass==pass3)
			{
				printf("Welcome Wael");
				break;
			} 
			else
			{
				printf("try again : ");
						scanf("%d",&pass);
			}
		}
		if (i==2)
		{
			printf("incorrect password for 3 times !");
		}
	}
	
	
	else
	{
		printf("You are not registered");
	}
	
}