#include<stdio.h>

int main()
{

int i;
int a[7]={5,6,8,2,9,3,6};
int result=a[0];

for(i=1;i<7;i++)
{
	if(result>a[i])
	 continue;
	 result=a[i];
}

printf("%d",result);

//-------------------------------------------


int arr[4]={1,2,3,4,5};
printf("%d",arr[0]);

//-------------------------------------------

int a;
int arr[5]={1,2,3,4,5};
arr[0]=++arr[1]-arr[1]--;
a=arr[0]++;
arr[0]=++arr[a++];

printf("a=%d arr[0]=%d arr[1]=%d",a,arr[0],arr[1]);
//-------------------------------------------


int i;
int arr[3]={1};
for(i=0;i<3;i++)
{
 printf("%d  ",arr[i]);
}
//-------------------------------------------
	
int arr[1]={5};
printf("%d ",0[arr]);

return 0;
}
