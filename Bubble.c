#include<stdio.h>
#include<stdlib.h>
int n;
void Bubble_sort(int a[])
{
int i,j,min;
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
min= a[j];
a[j]=a[j+1];
a[j+1]=min;
}
}
}
}

int main()
{
int a[10],i;
printf("Enter the value of n:");
scanf("%d",&n);
printf("Enter the integer values:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
Bubble_sort(a);
printf("Arrays in bubble sort order:");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}
