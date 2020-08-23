#include<stdio.h>
int LinearSearch(int [],int,int);
int main()
{
	int arr[50],i,n,key;
	printf("enter array size:");
	scanf("%d",&n);
	printf("enter %d into array:",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("array elements are:  ");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
	printf("\nenter the key that you want to search:");
	scanf("%d",&key);
	int index=LinearSearch(arr,n,key);
	if(index!=-1)
	printf("position of key %d is %d in the array.",n,index+1);
	else
	printf("given key is not found in the array...");

	return 0;
}
int LinearSearch(int arr[],int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		return i;
		
	}
	return -1;
}
