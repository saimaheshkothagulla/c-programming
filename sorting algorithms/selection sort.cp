#include<stdio.h>
int main()
{
	int arr[10]={5,3,6,7,2,8,9,0,1,4},i,j;
	int n=10,temp,c;
	printf("before sorting: ");
		for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	for(i=0;i<n-1;i++)
	{
		c=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[c]>arr[j])
			c=j;
		}
		temp=arr[i];
		arr[i]=arr[c];
		arr[c]=temp;
	}
	printf("\nafter sorting using insertion sort.....:  ");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
return 0;
}
