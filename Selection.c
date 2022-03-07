#include<stdio.h>
#include<stdlib.h>
int n;
void Selection_sort(int a[])
{
int i,j,p,t;
for(i=0;i<n-1;i++)
{
p=i;
for(j=i+1;j<n;j++)
{
if(a[p]>a[j])
{
p=j;
}
}
if(p!=i)
{
t=a[i];
a[i]=a[p];
a[p]=t;
}
}
}

int main()
{
int a[20],i;
printf("Enter the total no of element:");
scanf("%d",&n);
printf("Enter the array elements :");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
Selection_sort(a);
printf("Elements after selection sort:");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}
