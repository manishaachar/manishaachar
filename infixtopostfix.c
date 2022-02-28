#include<stdio.h>
#include<ctype.h>
char infix[30],postfix[30];
int top=-1;
char stack[30];

void push(char ch)
{
stack[++top]=ch;
}

char pop()
{
return stack[top--];
}

int precedence(char symbol)
{
switch(symbol)
{
case '$':return -1;
case '(':return 0;
case '+':return 1;
case '-':return 1;
case '/':return 2;
case '*':return 2;
}
}

void InfixToPostfix()
{
int i=0,k=0;
char ch;
while((ch=infix[i++])!='\0')
{
if(ch=='(')
push(ch);
else if(isalnum(ch))
postfix[k++]=ch;
else if(ch==')')
{
while(stack[top]!='(')
postfix[k++]=pop();
ch=pop();
}
else
{
while(precedence(stack[top]) >=precedence(ch))
postfix[k++]=pop();
push(ch);
}
}
while(stack[top]!='$')
postfix[k++]=pop();
postfix[k]='\0';
}

void main()
{
printf("\nEnter the infix expression:");
scanf("%s",infix);
push('$');
InfixToPostfix();
printf("\nThe postfix expreesion is:%s",postfix);
}
