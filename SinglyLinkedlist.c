#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

//INSERT FIRST OPERATION
void InsertFirst(PPNODE head,int no)
{
	PNODE newn =NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=no;
	newn->next=NULL;

	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		newn->next=*head;
		*head=newn;
	}
}
//InsertLast

void InsertLast(PPNODE head, int no)
{
  PNODE newn=NULL;
  PNODE temp=*head;

  newn=(PNODE)malloc(sizeof(NODE));

  newn->data=no;
  newn->next=NULL;

  if(*head==NULL)
  {
  	*head=newn;
  }
  else
 { 	
  while(temp->next !=NULL)
  {
  	temp=temp->next;
  }
  temp->next=newn;
}
}

//deletefirst operation

void DeleteFirst(PPNODE head)
     { 

        PNODE temp=NULL;
        temp=*head;
     	if((*head)==NULL)
     	{
     		return;
     	}
     	else if((*head) !=NULL)

     	{
     		*head=(*head)->next;
     		free(temp);
     	}
     	
     }



// deletelast

void DeleteLast(PPNODE head)
{
	PNODE temp=*head;
    if(*head == NULL)   // If linked list is empty
    {
        return;
    }

	else if((*head)->next== NULL)
	{
		free(*head);
		*head=NULL;
	}
	else
    {
	   while(temp->next->next !=NULL)
	  {
		temp=temp->next;
	  }
	  free(temp->next);
	  temp->next=NULL;
   }
}

//Display operation

void Display(PNODE head)
{
  while(head !=NULL)
  {
  	printf("%d\t",head->data);
  	head=head->next;
  }
}
//count

int Count(PNODE head)
{
	int icnt=0;
  while(head !=NULL)
  {
  	icnt++;
  	head=head->next;
  }
  return icnt;
}

//InsertATpos
void InsertAtPos(PPNODE head,int no,int pos)
{   
	PNODE temp=NULL;
	temp=*head;
	int size=0;
	int i=0;
	size=Count(*head);
	if((pos<1)||(pos>size+1))
	{
		return;
	}
	if(pos==1)
	{
		InsertFirst(head,no);

	}
	if(pos==size+1)
	{
		InsertLast(head,no);
	}
	else
	{   PNODE newn=NULL;
		newn=(PNODE)malloc(sizeof(NODE));
		newn->data=no;
		for(i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		newn->next=temp->next;
		temp->next=newn;
	}

}
//delete at pos
void DeleteAtPos(PPNODE head,int pos)
{
	int size=0;
	int i=0;
	size=Count(*head);
	PNODE temp=NULL;
	PNODE temp2=NULL;

	if((pos<1)||(pos>size))
	{
		return ;
	}
	if(pos==1)
	{
		DeleteFirst(head);
	}
	else if(pos==size)
	{
		DeleteLast(head);
	}
	else
	{
		temp=*head;
		for(i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		temp2=temp->next;
		temp->next=temp2->next;
		free(temp2);
	}

}


int main()
 {
 	PNODE first=NULL;
 	int choice=1;
 	int no=0,pos=0;
 	while(choice !=0)
 	{
 		printf("\n1:InsertFirst");
 		printf("\n2:InsertLast");
 		printf("\n3:DeleteFirst");
        printf("\n4:DeleteLast");
        printf("\n5:Insert at pos");
        printf("\n6:Delete at pos");
        printf("\n7:Display");
        printf("\n8:Count");
        
        printf("\nplease enter your choice : \n");
        scanf("%d",&choice);

        switch(choice)
        {
        	case 1: 
        	      printf("enter the element that we want to insert at first\n");
        	      scanf("%d",&no);
        	      InsertFirst(&first,no);
        	      break;

        	case 2: 
        	      printf("enter the element that we want to insert at last\n");
        	      scanf("%d",&no);
        	      InsertLast(&first,no);
        	      break;   
        	 case 3: 
        	      
        	     DeleteFirst(&first);
        	      break;
            case 4: 
        	      
        	    DeleteLast(&first);  
        	    break; 

            case 5: 
        	      printf("enter the element that we want to insert at pos\n");
        	      scanf("%d",&no);
        	      printf("enter the position of element");
        	      scanf("%d",&pos);
        	      InsertAtPos(&first,no,pos);
        	      break;

           case 6:
           printf("enter the position of element\n");
           scanf("%d",&pos);
             DeleteAtPos(&first,pos);
             break;

            case 7:
            Display(first);
            break;
            
            case 8:
            printf("number of elemets are%d\n",Count(first));
            
            break;

            

        }
 	}
 	return 0;
 }
