//----------------------------------------------------------------------------------------------------------------------------------------
/*Problem2 :
Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].
*/

//----------------------------------------------------------------------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>

/*int* arrayproduct(int arr1[],int n)
{
 int *arr2,i,j,flag=0;
 arr2=(int*)malloc(n*sizeof(int));
 
 for(i=0;i<n;i++) //Array Initialization
 {
  arr2[i]=1;
 }
 
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(i==j)
   {
    j++;
    flag=1;
   }
   
   if(flag==1)
   {
    arr2[i]*=arr1[j];
   }
  }
 
 }

return arr2;

}
*/

int main()
{
int n;

int *arr1,*arr2,i,j,flag=0;
 
printf("\n------------------------------------ :");
printf("\n    Daily Coding Problem-2            ");
printf("\n------------------------------------ :");

printf("\nEnter size of array :");
scanf("%d",&n);

//int *arr1,*arr2;
arr1=(int*)malloc(n*sizeof(int));

arr2=(int*)malloc(n*sizeof(int));

printf("\nEnter array elements:");

for(i=0;i<n;i++)
{
 scanf("%d",&arr1[i]);
}

//arr2=arrayproduct(arr1,n);
 for(i=0;i<n;i++) //Array Initialization
 {
  arr2[i]=1;
 }
 
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(i==j)
   {
     
    if(j!=(n-1))
    {
     flag=1;
     j++;
    }
    else
    {
     break;
    }
   }
   
   if(flag==1)
   {
    arr2[i]*=arr1[j];
   }
  }
 
 }
 
printf("\nRequired array is :");

for(i=0;i<n;i++)
{
 printf("%d ",arr2[i]);
}

return 0;
}









