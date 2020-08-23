#include<stdio.h>
int main()
{
	const int size=10;
	int arr[size],i,small,large;
	printf("enter the %d elements to the array:-",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	printf("array elements are:-");
		for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	//searching largest element..
	large=arr[0];
	small=arr[0];
	for(i=1;i<size;i++){
		if(large<arr[i])
			large=arr[i];
		if(small>arr[i])
		small=arr[i];
	}
	printf("small=%d\t large=%d",small,large);
	return 0;
}
