#include<stdio.h>
int main()
{
	int arr[],i,n;
	printf("enter size of an array:-");
	scanf("%d",&n);
	printf("enter %d elements to the given array:-",%d);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("array elements   before reversing are:-");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("array elements after reversing are:-");
	for(i=0;i<n/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	return 0;
}
