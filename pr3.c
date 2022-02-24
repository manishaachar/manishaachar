#include<stdio.h>
#include<stdlib.h>
void main()
{
int low,high,mid,key,a[10],n,i;
printf("Enter value of n");
scanf("%d",&n);
printf("Enter the array values");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the key value");
scanf("%d",&key);
low=0,high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(key==a[mid])
{
printf("Item found at loc %d",mid); 
exit(0);
}

else if(key<a[mid])
{
high=mid-1;
}
else
{
low=mid+1;
}
}
printf("Item not found");
}
