#Write a C program to Implement the following searching techniques 
#a. Linear Search 
#b.Binary Search.

#include<stdio.h>
int main()
{
int a[10],i,n,key;
printf("Enter value of n");
scanf("%d",&n);
printf("Enter the array values");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the key values");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(key==a[i])
{
printf("Number found at loc %d",i);
return 0;
}
}
printf("Number not found");
}



