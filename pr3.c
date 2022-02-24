#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[20],key,i,n,low=0,high,mid;
printf("array is");
scanf("%d",&n);
printf("Enter the array element");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the key");
scanf("%d",&key);
high=n-1;
while(low<=high)
{
mid=(high+low)/2;
if(a[mid]==key)
{
printf("item found");
return 0;
}
else if(key<a[mid])
high=mid-1;
else
low=mid+1;
}
printf("item is not found");
}




