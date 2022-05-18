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
	int ch, c, entry;
	while(1)
	{
	printf("\n1:insert\n2:display\n3:count\n4:exit");
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
		printf("\nGoodbye");
		exit(0);
	}
	}
	}
}
			
