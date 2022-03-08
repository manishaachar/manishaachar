#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
char infix[30],postfix[30];
int top=-1,stack[30];

void push(int ele)
{
stack[++top]=ele;
}

int pop()
{
int symbol;
symbol=stack[top--];
return symbol;
}


int Eval_postfix()
{
char symbol;
int i,op1,op2;
while((symbol=postfix[i++])!='\0')
{
if(isalnum(symbol))
{
push(symbol-'0');
}
else
{
op2=pop();       
op1=pop();
switch(symbol)
{
case '+':push(op1+op2);
	  break;
case '-':push(op1-op2);
	  break;
case '*':push(op1*op2);
	  break;
case '/':push(op1/op2);
	  break;
if(op2!=0)
{
push(op1/op2);
break;
}
else
{
printf("Out of flow...");
exit (0);
}
case '^':push(pow(op1,op2));
	break;
}
}
}
return pop();
}

void main()
{
int ans;
printf("Enter Postfix expression:");
scanf("%s",postfix);
ans=Eval_postfix();
printf("After the evaluation postfix expression:%d\n",ans);
}



