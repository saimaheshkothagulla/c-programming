#include<stdio.h>
int main()
{
	int arr[100],n,i,element;
	printf("enter tha size of array:-");
	scanf("%d",&n);
	printf("enter the elements to the array:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	printf("array elements are:-");
		for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nenter the postion :");
	scanf("%d",&element);
	printf("element at position %d is %d",element,arr[element]);
	return 0;
}
