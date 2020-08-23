#include<stdio.h>
int main()
{
	int arr[10]={5,3,6,7,2,8,9,0,1,4},i,j;
	int n=10,temp;
	printf("before sorting: ");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0 && arr[j]>temp;j--)
		{
			arr[j+1]=arr[j];
		}
		arr[j+1]=temp;
	}
	printf("\nafter sorting using insertion sort.....:  ");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
return 0;
}
