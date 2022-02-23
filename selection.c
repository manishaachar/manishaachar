#include<stdio.h>
int main()
{
int a[20],n,i,j,pos,temp;
printf("Enter the limit:");
scanf("%d",&n);
printf("The array elements are:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("The elemets after selection sort:");
for(i=0;i<n-1;i++)
{

pos=i;
for(j=i+1;j<n;j++)
{
if(a[pos]>a[j])
{

pos=j;
}
}

if(pos!=i)
{
temp=a[i];
a[i]=a[pos];
a[pos]=temp;
}
}
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;

}
