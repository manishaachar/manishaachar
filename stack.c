#include<stdio.h>
#include<stdlib.h>
#define maxsize 100
int stack[maxsize],top=-1;

void push(int ele)
{
if( top==maxsize-1)
{
	printf("Stack is full");
	exit(0);
}
	stack[++top]=ele;
}

int pop()
{ 
int ele;
if(top==-1)
{
printf("Stack is emplty");
exit(0);
}
ele=stack[top--];
return ele;
}


void display()
{
int i;
if( top==-1)
exit(0);
for(i=top;i<=top;i--)
printf("%d",stack[i]);
}


void main()
{
int ch,ele;
printf("1.push\n 2.pop\n 3.display \n 4.exit\n");
printf("Enter your choice:");
scanf("%d",&ch);
while(1)
{
switch(ch)
{
case 1: printf("Enter the elemt to be inserted:");
scanf("%d",&ele);
push(ele);
break;

case 2: pop();
break;

case 3: display();
break;
 default : printf("invalid input");
 exit(0);
 }
 }
 
}



