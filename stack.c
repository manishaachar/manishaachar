#include<stdio.h>
#include<stdlib.h>
#define maxsize  5
int stack[maxsize],i,top=-1,num;
void push() 
{
	if(top==maxsize-1)
	printf("\n Stack is Full");
	else
	{
		printf("\n Enter the Elements to Push: \n");
		scanf("%d",&num);
		stack[++top]=num;
	}
}
void pop()
{
	if(top==-1)
	printf("\n Stack is Empty \n");
	else
	{
		printf("\n %d is Poped",stack[top]);
		top--;
	}
}
void display()
{

	if(top==-1)
	{
	printf("\n Stack is Empty \n");
}


	  else
	{
		printf("\n Stack Elements are:");
		for(i=0;i<=top;i++)
		printf(" %d ",stack[i]);
	}
}
void main()
{
	int ch;
	
	while(1)
	{
		printf("Stack operation are:");
		printf("\n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT \n Enter your choice:");
		scanf("%d",&ch);
		switch(ch)	
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3: display();
			break;
			case 4: exit(0);
			default:
			printf("\n Invalid choice");
			break;
		}
	}
}
