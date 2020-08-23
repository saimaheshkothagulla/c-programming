#include<stdio.h>
int main()
{
	int arr[50],i,n,position;
	printf("enter size of an array:-");
	scanf("%d",&n);
	printf("enter %d elements to the array:-",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("array before deleting:-");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("enter the position where you want to delete it:-");
	scanf("%d",&position);
	for(i=position;i<n-1;i++)
	arr[i]=arr[i+1];
	printf("array after deleting:-");
	for(i=0;i<n-1;i++)
	printf("%d ",arr[i]);
	return 0;
	
}
