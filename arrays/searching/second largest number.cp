#include<stdio.h>
int main()
{
	const int size=5;
	int arr[size],temp,i,j,large,sec_large,c;
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
	//sorting in ascending order....
	for(i=0;i<size-1;i++)
	{
		c=i;
		for(j=i+1;j<size;j++)
		{
			if(arr[c]>arr[j])
			c=j;
			
		}
		temp=arr[i];
		arr[i]=arr[c];
		arr[c]=temp;
		
}
printf("after sorting:\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
		
	printf("small element=%d",arr[0]);
	printf("second smallest element=%d",arr[1]);
	printf("largest element=%d",arr[size-1]);
	printf("second largest element=%d",arr[size-2]);	
	
	return 0;
}
