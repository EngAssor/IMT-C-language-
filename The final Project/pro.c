#include<stdio.h>
#include"typ.h"
#include <stdlib.h>
#include<string.h>
u8 st_slot[13]="2pm to 2:30pm";
u8 nd_slot[13]="2:30pm to 3pm";
u8 th_slot[13]="3pm to 3:30pm";
u8 fth_slot[13]="4pm to 4:30pm";
u8 fivth_slot[13]="4:30pm to 5pm";
u8 no_slot[13]="- NO slot  ";
u8 *slot_p[6] ={st_slot,nd_slot,th_slot,fth_slot,fivth_slot,no_slot}; // array of ptr to string
u8 taken_slot[5]={0,0,0,0,0}; // to sotr 1 if it taken
u8 slot_count=0; // to know there is avilable slots or not 
u8 slot_num;
struct node {
	u32 ID;
	u8 Name[10];
	u8 Age ;
	u8 Gender[5];
	u8 slot[13];

	struct node * Next;
};
typedef struct node newNode;
struct node * headref = NULL;
struct node * currnt =NULL;


// fun to defune the id is taken or not
u8 id_not_here(struct node * ptr,u32 id)
{   
	while(ptr!=NULL)
	{
		if(ptr->ID==id)
		{
			
			// if the id is taken return 1
			currnt =ptr;
			return 1;
		}
		
		else{}
		
		ptr=ptr->Next;
	}
	// id is clear return 2
	return 2;
}
// slot function to add slot to patient
u8 add_slot(u32 id,u8 *ptr_slot)
{ u8 x;
	x=id_not_here(headref,id);
	if(x==1)
	{
		u8 n ;
		if(currnt->slot[0]=='-')
		{
		for(n=0;n<13;n++)
		{
		
		currnt->slot[n]=*ptr_slot;
		ptr_slot++;
		
		
		}
		return 1;
		
		}
		
		}
		else 
		{
			return 2;
		}
	
}

// add new patient function
void Add_new_patient_record (struct node ** head,u32 id ,u8 *name,u8 age ,u8 *gender)
{
	u8 idvalid ;
	idvalid = id_not_here(headref,id);
	//if the id is unique
	if(idvalid==2)
	{
   struct node * new_node =(struct node *) malloc(sizeof(struct node));
   new_node->ID = id;
   new_node->Age=age;
   u8 i ;
   for(i=0;i<10;i++)
   {
	   new_node->Name[i]=*name;
	   name++;
   }
   for(i=0;i<5;i++)
   {
	   new_node->Gender[i]=(*gender);
	   gender++;
   }
   
      for(i=0;i<13;i++)
	  {
   new_node->slot[i]=no_slot[i];
	  }

   new_node->Next=(*head);
   (*head)=new_node;
   
	}
	else{printf("id is taken please try agine");}
	
}

// edit function
void Edit_patient_record(u8 *name,u8 age ,u8 *gender)
{
	currnt->Age=age;
   u8 z ;
   for(z=0;z<10;z++)
   {
	   currnt->Name[z]=*name;
	   name++;
   }
   for(z=0;z<5;z++)
   {
	   currnt->Gender[z]=(*gender);
	   gender++;
   }

	
}

// printList function
void printList(struct node * node) 
{ 
  while (node != NULL) 
  { 
     printf("\n %d \n", node->ID);
	 printf(" %s \n", node->Name);
	 printf(" %d \n", node->Age);
	 printf(" %s \n", node->Gender);
	 for(int i=0;i<13;i++)
	 {
	 printf("%c", node->slot[i]);
	 }
	 printf("\n");
     node = node->Next; 
  } 
} 


int main (){
	u8 flag =True; // falg to chack the running of the program
	while (flag ==True){
		printf("Welcome to the clinic program\n -----------------------------\ninsart the mode number  \n ---------------------- \n 1- User  \t 2- Admin \n"); // welcom masseage with mode 
	// sacning the vaule of the mode 
	u8 mode =0; // use to know the mode user or admin
	
	// loop for ture all all the running time
	scanf("%d",&mode);
	// if ==> mode 
	if (mode == 1){// if press 1 
	printf("You are in User mode now \n ");
		
		
	}
	else if (mode == 2){// if press 2
			printf("\nYou are in Admin mode now \n ");
			u16 default_password = 1234;
			u16 Admin_password = 0;
			printf("Enter the password \n");
			
			scanf("%d",&Admin_password);// scaning the password
			u8 i =0;
			// looping for 2 times to give the user 3 times trial
			for(;i<2;i++) 
			{
				if (Admin_password==default_password)
				{break;}
				else
				{printf("\nwrong password! \ntry agine :\n");
				scanf("%d",&Admin_password);
				
				}
				
			}
			if (i==2)// exit the program after 3 trial 
				{flag=False;}
				
				
				
				else{
					
					
					
			// login vaild
			u8 function_To_Do=-1;
			// printing & scaning the function in admin mode
			u8 flag_admin = True;
			while(flag_admin){
			printf("\nchoose the function to do \n");
			printf("1-Add new patient record:\t       2-Edit patient record\n");
			printf("3-Reserve a slot with the doctor\t4-Cancel reservation\n5-if you want to the previous mune\n ");
			 scanf("%d",&function_To_Do);
			 printf("=====================================================================\n");
			 //if ==> function_To_Do
			 
			 
			 
			 if(function_To_Do==1)
			 {
			     u32 i_D=0;
				 u8 n_M[10];
				 u8 g_D[5];
				 u8 a_G=0 ;
				 
				printf("Enter the patient name : ");
						scanf("%s",n_M);
				printf("\n======================================================\n");
						printf("Enter the patient id : ");
						scanf("%d",&i_D);
				printf("\n======================================================\n");
						printf("Enter the patient age : ");
						scanf("%d",&a_G);
				printf("\n======================================================\n");
						printf("\nEnter the patient gender : ");
						scanf("%s",g_D);
				printf("\n======================================================\n");
				
				
					Add_new_patient_record(&headref,i_D,n_M,a_G,g_D);
				printf("\n======================================================\n");
					function_To_Do=-1;
			 }
			 
			 
			 
			 else if (function_To_Do==2)
			 {
				 u8 idhere ;
				 u32 edit_id;
				 printf("\n======================================================\n");
				 printf("To edit patient record enter his id:");
				 scanf("%d",&edit_id);
				  idhere = id_not_here(headref,edit_id);
				 if(idhere==1)
				 {
					  
				 u8 ed_nm[10];
				 u8 ed_gn[5];
				 u8 ed_ag=0 ;
				 
					 
					 printf("Enter the patient name : ");
					scanf("%s",ed_nm);		
				 printf("\n======================================================\n");
				 printf("Enter the patient age : ");
				 scanf("%d",&ed_ag);
				 printf("\n======================================================\n");
				 printf("\nEnter the patient gender : ");
				 scanf("%s",ed_gn);
				 printf("\n======================================================\n");
					 Edit_patient_record(ed_nm,ed_ag,ed_gn);
					printf("\n======================================================\n");
				 }
				 else {printf("Invalid ID");
				 printf("\n======================================================\n");
				 }
				 function_To_Do=-1;
			 }
			  else if (function_To_Do==3)
			 {
				  u8 q,s;
				 s8 flg=0;
				 
				 
				if(slot_count<5){
					printf("\n======================================================\n");
				printf("There are the avilable slots \n");
				for(q=0;q<5;q++)
				{ 
				
					if(taken_slot[q]==0)
					{
					printf("%d-",q+1);
					printf("%s\n",slot_p[q]);
					printf("\n======================================================\n");
					}
					else{}
				}
				}
				else {
					printf("\n======================================================\n");
					printf("All slots are taken\n");
					flg=-1;
					printf("\n======================================================\n");
					
					
					}
				
				if(flg==0)
				{
				u32 slot_ID;
				printf("\n======================================================\n");
				printf("Enter the patient ID:");
				scanf("%d",&slot_ID);
				
				printf("\n======================================================\n");
				printf("choose the slot you want ");
				scanf("%d",&s);
				printf("\n======================================================\n");
				if(s>0&&s<=5)
				{
					u8 y =add_slot(slot_ID,slot_p[s-1]);
					if(y== 1)
					{
					taken_slot[s-1]=1;
					slot_count++;
					printf("slot have been taken sccessfuly\n ");
					printf("\n================================\n");
					}
					else
					{
					
					printf("invalid ID\n");
					printf("\n================================\n");
					}
					
				}
				else
				{printf("invalid input");
				printf("\n================================\n");
				}
				}
				 function_To_Do=-1;
			 }
			  else if (function_To_Do==4)
			 {
				 u32 cid;
				 u8 countre=0;
				 printf("Cancel reservation\n");
				 printf("==================\n");
				 printf("Enter the patient ID:\n");
				 scanf("%d",&cid);
				 u8 m =id_not_here(headref,cid);
				 
				 if(currnt->slot[0]!='-')
				 {
				 if(m==1)
				 {
					 u8 c ,d;
					 for(c=0;c<6;c++)
					 {
						 u8 * ptr = slot_p[c];
						 
						 for(d=0;d<13;d++)
						 {
					if (currnt->slot[d]==*ptr)
					{
						ptr++;
						countre++;
						if(countre==12)
						{
							slot_num=c;
							c=7;
							break;
						}
						
					}
						 }
					 
					 }
				taken_slot[slot_num]=0;
				slot_count--;
				for(d=0;d<13;d++)
				{
				currnt->slot[d]=no_slot[d];
				}
				 }
				 }
				 else
				 {
					 printf(" invalid ID");
				 }
				 function_To_Do=-1;
			 }
			  else if(function_To_Do==5)
			 {
				 printList(headref);
				 for(int u =0;u<5;u++)
				 {
					 printf("%d \n\n",taken_slot[u]);
				 }
				 printf("%d",slot_num);
				/* flag_admin= False;
				 function_To_Do=-1;*/
				 }
			 else
			 {
				 printf("Invalid input");
				 function_To_Do=-1;
				}
			}
				}
		
	}
	else{
			printf("invalid input \n ");

	}
	}
}




