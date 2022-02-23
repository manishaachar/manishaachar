#include<stdio.h>
int main()
{
int a[20],n,i,j,temp;
printf("Enter the limit:");
scanf("%d",&n);
printf("The array elements are:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Elements after bubble sort:");
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)

if(a[j]>a[j+1])
{
temp= a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}

for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}
