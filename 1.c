/*
Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
int k,flag=0;
int *arr;
int i,c=0,j,n;

printf("\nEnter size of array :");
scanf("%d",&n);

arr=(int*)malloc(n*sizeof(int));

for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

printf("\nEnter k :");
scanf("%d",&k);

for(i=0;i<n-1;i++)
{
 for(j=i+1;j<n;j++)
 {
  c=arr[i]+arr[j];
  if(c==k)
  {
   printf("\n%d + %d = %d where array contains %d,%d\n",arr[i],arr[j],k,arr[i],arr[j]);
   flag=1;
   continue;
  }
 }
} 

if(flag!=1)
{
printf("\nAny two nos. from array cannot form addition %d\n",k);
}

return 0;
}
