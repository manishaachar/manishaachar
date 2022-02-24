#include<stdio.h>
void main()
{
int a[20],n=4,i,key,flag=0;
printf("array is");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the key ");
scanf("%d",&key);
for(i=0;i<n;i++)
if(key==a[i])
{
flag=1;
}
if(flag==1)
printf("item found");
else
printf("item not found");
}

