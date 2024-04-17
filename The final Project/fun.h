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
void add_slot(u32 id,u8 *ptr_slot)
{ u8 x;
	x=id_not_here(headref,id);
	if(x==1)
	{
		u8 n ;
		for(n=0;n<13;n++)
		{
		currnt->slot[n]=*ptr_slot;
		ptr_slot++;
		}
		}
		else 
		{
			printf("Invalid ID");
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
     printf(" %d \n", node->ID);
	 printf(" %s \n", node->Name);
	 printf(" %d \n", node->Age);
	 printf(" %s \n", node->Gender);
	 printf(" %s \n", node->slot);
     node = node->Next; 
  } 
} 
