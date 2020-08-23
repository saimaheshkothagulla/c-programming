#include<stdio.h>
int main()
{
	int arr[100],c=0,temp=0,i,j,n;
	printf("enter the no.of elements:");
	scanf("%d",&n);
	printf("enter the  elements to tha given array:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);	
	}
	printf("elements before sorting");
	for(i=0;i<n;i++)
	{
	printf("%d ",arr[i]);	
	}
	printf("elements after sorting(bubble sort)");
	for(i=0;i<n-1;i++)
	{
		c=i;
	for(j=i+1;j<n;j++)
	{
		if(arr[c]>arr[j])
		{
		   c=j;
		}
	}
		if(c!=i)
		{
			temp=arr[c];
			arr[c]=arr[i];
			arr[i]=temp;
		}
}
	printf("elements after sorting");
	for(i=0;i<n;i++)
	{
	printf("%d ",arr[i]);	
	}
	
	
	
	
	return 0;
}
