#include<stdio.h>
#include<stdlib.h>
#define n 5
int top=-1;
int stack[n];
void push(int val)
{	
		top++;
		stack[top]=val;
		printf("\n%dpushed",stack[top]);
}
void pop()
{
	printf("\n%d popped",stack[top]);
	stack[top]=-1;
	top--;
}

int isfull()
{
	if(top==n-1)
	return 1;
	else
	return 0;
}
int isempty()
{
	if(top==-1)
	return 1;
	else
	return 0;
}
void findtop()
{
	printf("\ntop position is %d",top);
	printf("\ntop value is %d\n",stack[top]);
}
void display()
{
	int i,x;
	x=top;
	for(i=x;i>=0;i--)
	printf("\n%d)\t%d\n",i,stack[i]);
}
void main()
{	
	int ch,val;
	while(1)
	{
	printf("MENU: 1.Push 2.Pop 3.Find top 4.Display\n Enter choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
		if(isfull())
		printf("\nOVERFLOW");
		else
		{	
			printf("enter value");
			scanf("%d",&val);
			push(val);
		}	
		break;
		}	
		case 2:
		{
		if(isempty())
			printf("\nunderflow");
		else
			pop();
		break;
		}
		case 3:
		{
			findtop();
			break;
		}
		case 4:
		{
			display();
			break;
		}
		default:
		{
			printf("invalid choice");
			exit(0);
		}
	}
	}
}
	
