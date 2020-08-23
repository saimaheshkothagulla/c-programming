#include<stdio.h>
int main()
{
	int arr[]={41,12,23,4,2,34,43,56,545,44},i;
	printf("elements of the array are:\n");
	for(i=0;i<10;i++)
	printf(" %d",arr[i]);
	printf("\nelements at even places in the array are:\n");
	for(i=0;i<10;i+=2)
	printf(" %d",arr[i]);
	printf("\nelements at odd places in the array are:\n");
	for(i=1;i<10;i+=2)
	printf(" %d",arr[i]);
	return 0;
	
}
