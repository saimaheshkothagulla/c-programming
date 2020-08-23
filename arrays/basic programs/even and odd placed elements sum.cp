#include<stdio.h>
int main()
{
	int arr[]={41,12,23,4,2,34,43,56,545,44},i;
	int even_sum=0,odd_sum=0,total_sum=0;
	printf("elements of the array are:\n");
	for(i=0;i<10;i++)
	{
	total_sum+=arr[i];
	printf(" %d",arr[i]);
	}
	printf("\nelements at even places in the array are:\n");
	for(i=0;i<10;i+=2)
	{
		even_sum+=arr[i];
	printf(" %d",arr[i]);
	}
	printf("\nelements at odd places in the array are:\n");
	for(i=1;i<10;i+=2)
	{
	odd_sum+=arr[i];
	printf(" %d",arr[i]);
	}
	printf("\nsum of even placed elements=%d",even_sum);
	printf("\nsum of odd placed elements=%d",odd_sum);
	printf("\nsum of total elements=%d",total_sum);
	

	return 0;
	
}
