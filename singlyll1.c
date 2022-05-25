#include<stdio.h>
#include<stdlib.h>
void main()
{
struct node
	{
	int data;
	struct node * next;
	};
	struct node * head=NULL, * pos=NULL, * tail =NULL;
	int ch, c, u, entry,t;
	while(1)
	{
	printf("\n1:insert\n2:display\n3:count\n4:search an element\n5: delete\n 6:exit");
	printf("\nEnter choice");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	{
		printf("\n Enter data");
		scanf("%d",&entry);
		if(head==NULL)
		{
		head = (struct node *)malloc(sizeof(struct node));
		head -> data = entry;
		pos = head;
		tail=head;
		}
		else
		{
		tail-> next=(struct node *)malloc(sizeof(struct node));
		tail= tail -> next;
		tail -> data = entry;
		} break;
	}
	case 2:
	{
		pos=head;
		printf("\nElements are: ");
		while(pos!=NULL)
		{
		printf("\t%d",pos->data);
		pos = pos-> next;
		} break;
	}
	case 3: 
	{
		c=0;
		pos=head;
		while(pos!=NULL)
		{
		c++;
		pos=pos -> next;
		}
		printf("\nno of elements in list is %d",c);
		break;
	}
	case 4:
	{	
		printf("\nEnter number to be searched");
		scanf("%d",&u);
		pos=head;
		t=0;
		while(pos!=NULL)
		{
		if(pos->data==u)
			{
			t=1;
			break;
			}
		pos=pos->next;
		}
		if(t==1)
				printf("\nthe element is present");
		else
			printf("\nthe element is not present");
		break;
	}
	
	case 5:
	{
	struct node * temp= head;
	printf("\n Enter position of data: ");
	scanf("%d",&entry);
	if(entry==0)
	{
	head=head->next;
	temp-> next = NULL;
	free(temp);
	}
	else
	{
	for(int i=0;i<entry-1;i++)
	temp=temp->next;
	struct node *del = temp-> next;
	temp -> next= temp->next->next;
	del->next=NULL;
	free(del);
	}break;
}

	case 6:
	{
		printf("\nGoodbye");
		exit(0);
	}
	}
	}
}
			
